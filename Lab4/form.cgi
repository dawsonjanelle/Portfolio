#!/usr/bin/python3

import common
import cgi


def main():
  common.header("Results")
  form = cgi.FieldStorage()

#CODE FOR PROCESSNG THE FORM AND PRINTING THE REPORT
#Andrew helped me with fixing my errors and helped with my formatting issues and helped me figure out that I couldn't name things sum, min, max, etc. because those are methods in python unlike C++.

  score_sum = 0
  average = 0

  firstname = form.getvalue("firstname", "")
  lastname = form.getvalue("lastname", "")
  score1 = int(form.getvalue("score1" , "0"))
  score2 = int(form.getvalue("score2", "0"))
  score3 = int(form.getvalue("score3", "0"))
  score4 = int(form.getvalue("score4", "0"))
  score5 = int(form.getvalue("score5", "0"))

  scores = [score1, score2, score3, score4, score5]
  score_min = score1
  score_max = score1

  for score in scores:
  	score_sum = score_sum + score 

  	if score < score_min:
  		score_min = score
  	if score > score_max:
  		score_max = score

  average = score_sum/5

  print(firstname + " " + lastname)
  print("Max: " + str(score_max)) 
  print("Min: " + str(score_min))
  print("Average: " + str(average))

#The if statement was causing issues for some reason. Andrew helped me figure that out.
main()
common.footer()

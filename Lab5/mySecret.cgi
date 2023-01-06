#!/usr/bin/python3

import common
import cgi

def main():
  common.header("Test")
  number = common.CheckSession()
  if number == 1:
  	print("<p>You did it!</p>") 
  elif number == 0:
  	print("<p>No Access</p>")
  #Andrew told me to add <p> tag.

  common.footer()
main()
	

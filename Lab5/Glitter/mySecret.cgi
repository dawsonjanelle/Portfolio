#!/usr/bin/python3

import common
import cgi

def main():
  common.header("Test")
  number = common.CheckSession()
  if number == 1:
  	print("<p>You did it!</p>")
  elif numberr == 0:
  	print("<p>no</p>")
  #Andrew told me to ad <p> tag.

  common.footer()
main()
	

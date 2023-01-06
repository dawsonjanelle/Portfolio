#!/usr/bin/python3

import http.cookies
import os

def CheckSession():
	c = http.cookies.SimpleCookie(os.environ.get("HTTP_COOKIE"))
	if "username" in c:
		uname = c['username'].value
	else:
		return 0

	if "sid" in c:
		sid = c['sid'].value
	else:
		return 0
	sfile = open('/home/jdawson/secret/sessions', 'r')
	lines = sfile.readlines()
	sfile.close()
	for line in lines:
		pieces = line.split()
		if pieces[0] == uname and pieces[1] == sid:
			return 1
	return 0



def header(title, cookie=None):
  print('Content-Type: text/html')
  if cookie != None:
  	print(cookie)
  print("")
  print("""<!DOCTYPE html>
           <html lang=en>
	   <head>
	   	<title>""" + title + """</title>
		<meta charset=utf-8>
	   </head>
	   <body>""")

def footer():
  print("""</body>
      	   </html>""")

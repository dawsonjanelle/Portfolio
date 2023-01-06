#!/usr/bin/python3


import http.cookies
import random
import hashlib
import commonGlitter
import cgi


def MakeCookie(username):
	c = http.cookies.SimpleCookie()
	c["username"] = username
	sid = ""
	for i in range(0,128):
		sid += random.choice("0123456789abcdefghijklmnopqrstuvwxyz")
	c["sid"] = sid
	file = open('/home/jdawson/secret/sessions','a')
	file.write(username + '\t' + sid + '\n')
	file.close()
	return c



def payload(username):
	cookie = MakeCookie(username)
	commonGlitter.header("payload", cookie)
	print("<a href=canvas.html>""""Click Here To Draw!""""</a>")
	print("<img src=PaintBucket.png alt=""""Paint bucket dumping purple paint."""" />")
	commonGlitter.footer()

def sorry():
	commonGlitter.header("sorry")
	print("Sorry, access denied")
	commonGlitter.footer()


def CheckPassword():
	form = cgi.FieldStorage()
	if "username" in form and "password" in form:
		username = form['username'].value
		password = form['password'].value
		file = open('/home/jdawson/secret/passwords', 'r')
		lines = file.readlines()
		file.close()
		m = hashlib.sha1()
		m.update(password.encode())
		hex = m.hexdigest()
		for line in lines:
			pieces = line.split()
			if username == pieces[0] and hex == pieces[1]:
				payload(username)
				return
	sorry()
	return
CheckPassword()

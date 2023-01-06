#!/usr/bin/python3


import http.cookies
import random
import hashlib
import common
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
	common.header("payload", cookie)
	print("<a href=mySecret.cgi>""""Link""""</a>")
	common.footer()

def sorry():
	common.header("sorry")
	print("Sorry, access denied")
	common.footer()


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

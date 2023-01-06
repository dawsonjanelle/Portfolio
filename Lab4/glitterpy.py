#!/usr/bin/python3

def header(title):
	print('Content-Type: text/html')
	print("")
	print("""<!DOCTYPE html>
    		<html lang=en>
		<head>
			<title>""" + title + """</title>
			<meta charset=utf-8>
			<link rel="stylesheet" href="glitter.css" />
		</head>
		<body>
		<div class=section>
			<h2>Fashion Fabulous! Thank you for playing!</h2>
		</div>""")

def footer():
	print("""</body>
		</html>""")
	

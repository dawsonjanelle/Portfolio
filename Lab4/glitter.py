#!/usr/bin/python3

def header(title):
	print('Content-Type: text/html')
	print("")
	print("""<!DOCTYPE html>
    		<html lang=en>
		<head>
			<meta charset=utf-8>
			<title>""" + title + """</title>
		</head>
		<body>""")

def footer():
	print("""</body>
		</html>""")
	

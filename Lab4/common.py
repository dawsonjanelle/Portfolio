#!/usr/bin/python3

#Andrew helped me with fixing my errors and helped with my formatting issues, like forgetting the : after the functions, and I accidently had header as common...oops.

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
	

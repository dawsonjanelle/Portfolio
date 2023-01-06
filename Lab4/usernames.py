#!/usr/bin/python3

print("""<!DOCTYPE html>
    <html lang=en>
    <head>
    	<title>Lab4</title>
	<meta charset=utf-8>
    </head>
    <body>""")

#bob dictionary
bob = {}

bob["ssn"] = 0
bob["username"] = "bob"
bob["name"] = "Bob"
bob["salary"] = 100

#sam dictionary
sam = {}

sam["ssn"] = 1
sam["username"] = "sam"
sam["name"] = "Sam"
sam["salary"] = 101

#henry dictionary
henry = {}

henry["ssn"] = 2
henry["username"] = "henry"
henry["name"] = "Henry"
henry["salary"] = 102

#list called accounts
accounts = []

accounts+=[bob]
accounts+=[sam]
accounts+=[henry]
print("""<div id=name>
    	 <ul>""")

for a in accounts:
	print(a["salary"])	
	print("""<li> """ + a["username"] + """: """ + a["name"] + """</li>""")
print("""</ul>
	</div>
    	</body>
	</html>""")	


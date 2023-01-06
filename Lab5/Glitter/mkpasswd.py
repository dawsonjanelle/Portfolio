from hashlib import sha1

cipher = sha1()
print('Please type in a username: ')
name = input()
print("")

print('Please type in a password: ')
passwrd = input()

cipher.update(passwrd.encode())
hash = cipher.hexdigest()
print('The username is: ', name)
print('The encrypted password is: ', hash)

passwords = open('passwords', 'a')
passwords.write(name + "\t" + hash)
passwords.close()


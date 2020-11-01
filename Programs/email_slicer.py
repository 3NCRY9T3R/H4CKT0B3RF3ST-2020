# Email Slicer using User Input

email = input('Enter your Email ID: ').strip()

username = email[ : email.index("@")]

domain_name = email[ email.index("@")+1 : email.index('.') ]

result = "Your Username is '{}' and your domain name is '{}'". format(username, domain_name)

print(result)

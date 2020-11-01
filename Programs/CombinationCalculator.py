def factorial(x):
    fact = 1
    for i in range(1,x+1):
        fact = fact * i
    return fact

def combination(n,r):
    temp = n - r
    result = factorial(n) / (factorial(r) * factorial(temp))
    return result

print("Input value of n : ")
n = int(input())

print("Input value of r : ")
r = int(input())

print("Combination = " + str(combination(n,r)))
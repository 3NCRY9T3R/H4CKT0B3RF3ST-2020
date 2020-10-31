#Sum of input numbers
# Ex : input = 3255
# Output : 3 + 2 + 5 + 5 = 15

print("Input numbers : ")
numbers = int(input())
i = 0
total = 0
while(numbers > 0):
    n = int(numbers%10)
    print(str(n),end = " ")

    if(numbers > i):
        print(" + ",end = " ")

    total = int(total + n)
    numbers = int(numbers/10)
    i+=1

total = int(total + numbers)
print("= " + str(total))

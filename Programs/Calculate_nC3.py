# First we will take input
n=int(input("Enter any positive integer >= 3 : "))
answer=0
for i in range(n):
    for j in range(n):
        for k in range(n):
            if i<j and j<k:
                answer+=1
print(answer)

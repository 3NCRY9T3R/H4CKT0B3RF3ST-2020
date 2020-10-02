import math
s=input()
s=s.split(" ")
s1=""
for i in s:
    s1+=i
    
size_of_s=len(s1)
n=int(math.sqrt(size_of_s))
if n*n==size_of_s:
    m=n
else:
    m=n+1
if m*n<size_of_s:
    while m*n<size_of_s:
        n+=1;

k=0
lis=[]
for i in range(n-1):
    lis1=[]
    for j in range(m):
        lis1.append(s1[k+j])
    lis.append(lis1)
    k+=m

x=size_of_s-k
for i in range(n-1,n):
    lis1=[]
    if x>0:
        for j in range(x):
            lis1.append(s1[k+j])
    lis.append(lis1)

flag=0
for j in range(m):
    if j>=x and flag==0:
        n-=1
        flag+=1  
    for i in range(n):    
        print(lis[i][j],end="")
    print(end=" ")


t=int(input())
def solvethequetion(l,n,x):
    p,ct=0,0
    for i in range(0,n):
        if l[i]*2>=x:
            p=i
            break
    
    for i in range(p,n):
        if l[i]<=x:
            x=l[i]*2
            ct+=1
        elif x<l[i]:
            while x<l[i]:
                x*=2;
                ct+=1
            x=l[i]*2
            ct+=1
    print(ct+p)
while t!=0:
    t-=1
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    solvethequetion(l,n,x)

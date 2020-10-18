d={}
def deposit(n):
    amt=int(input("\nenter the amount you want to deposit"))
    d[n][1]=d[n][1]+amt
    print(d[n])
def withdraw():
    amt=int(input("\nenter the amount you want to withdraw"))
    if(d[n][1]>=amt):
        d[n][1]=d[n][1]-amt
    else:	
        print("amount is not sufficient")
    print(d[n])
def chkamt():
    print("\nYour balance is ",d[n][1])
def transfer():
    b=input("\nenter the name of account in which you want to transfer")
    if b in d:
        amt1=int(input("\nenter the amount you want to transfer"))
        if(d[n][1]>amt1):
            d[n][1]=d[n][1]-amt1
            d[b][1]=d[b][1]+amt1
            print("balance of n is ",d[n][1])
        else:
            print("amount not sufficient")
    else:
        print("entry not found")
        


    
n=int(input('Enter range'))
for i in range(0,n):
    name=input('Enter Name')
    f=input('enter password')
    c=int(input('enter balance'))
    list=[f,c]
    d[name]=list
print(d)
n=input('enter name')
if n in d:
    p=input('enter password')
    if p in d[n][0]:
        print("enter 1:Deposit\n 2:Withdraw\n 3:Transfer\n 4:Check Amount")
        while(1):
            a=int(input("enter the number"))
            if a==1:
                deposit(n)
            elif a==2:
                withdraw()
            elif a==3:
                transfer()
            elif a==4:
                chkamt()
            else:
                 print("Please enter correct number")
                 break
    else:
        print("incorrect password")
            
    
        
else:
    print("entry not found")

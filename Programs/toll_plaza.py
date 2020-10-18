import xlrd
import xlwt
import xlutils
from xlutils.copy import copy
import datetime
a=xlrd.open_workbook("toll_plaza.xls")
b=a.sheet_by_index(0)
c=copy(a)
d=c.get_sheet(0)
print("Enter\n1: Single Sided\n2: Double Sided\n3:Day exit")
num=int(input("enter the number"))
if(num==1):
    print("enter the type:\n1:Bike\n2:Car\n3:Bus\n4:Truck")
    type1=int(input("enter vehicle type"))
    vno=int(input("enter Vehicle Number"))
    time=str(datetime.datetime.now())
    #print(time)
    
    if(type1==1):
        payment=50
        vtype='Bike'
    elif(type1==2):
        payment=100
        vtype='Car'
    elif(type1==3):
        payment=150
        vtype='Bus'
    elif(type1==4):
        payment=200
        vtype='Truck'
    else:
        print("enter the correct number")
    j=0
    s=''
    x=''
    w=''
    string=''
    while time[j]!='-':
        s=s+time[j]
        j=j+1
    j=j+1
    while time[j]!='-':
        x=x+time[j]
        j=j+1
    j=j+1
    while time[j]!=' ':
        w=w+time[j]
        j=j+1
    j=j+1
    string=w+x+s+'00000'
    string=int(string)
    m=b.nrows
    receipt=string+m
    print("Your Receipt number is",receipt) 
    print("please pay Rs",payment)
    z=b.nrows
    d.write(z,0,vno)
    d.write(z,1,vtype)
    d.write(z,2,time)
    d.write(z,3,"Single Sided")
    d.write(z,4,receipt)
    d.write(z,6,payment)
    c.save("toll_plaza.xls")
elif(num==2):
    print("enter:\n1:Entry\n2:Exit")
    num1=int(input("Enter the number"))
    if(num1==1):
        print("enter the type:\n1:Bike\n2:Car\n3:Bus\n4:Truck")
        type1=int(input("enter vehicle type"))
        vno=int(input("enter Vehicle Number"))
        time=str(datetime.datetime.now())
        #receipt=int(input("enter receipt no"))
        if(type1==1):
            payment=80
            vtype='Bike'
        elif(type1==2):
            payment=150
            vtype='Car'
        elif(type1==3):
            payment=200
            vtype='Bus'
        elif(type1==4):
            payment=200
            vtype='Truck'
        else:
            print("enter the correct number")
        j=0
        s=''
        x=''
        w=''
        string=''
        while time[j]!='-':
            s=s+time[j]
            j=j+1
        j=j+1
        while time[j]!='-':
            x=x+time[j]
            j=j+1
        j=j+1
        while time[j]!=' ':
            w=w+time[j]
            j=j+1
        j=j+1
        string=w+x+s+'00000'
        string=int(string)
        m=b.nrows
        receipt=string+m
        print("Your Receipt number is",receipt) 
        print("please pay Rs",payment)
        print("Have a safe journey.....")
        z=b.nrows
        d.write(z,0,vno)
        d.write(z,1,vtype)
        d.write(z,2,time)
        d.write(z,3,"Double Sided")
        d.write(z,4,receipt)
        d.write(z,6,payment)
        c.save("toll_plaza.xls")
    elif(num1==2):
        receipt=int(input("enter receipt no"))
        z=b.nrows
        flag=0
        for i in range(z):
            if(b.cell_value(i,4)==receipt):
                print("b")
                rt=str(datetime.datetime.now())
                et=str(b.cell_value(i,2))
                d.write(i,5,rt)
                print('et : ',et)
                print('rt : ',rt)
                et=datetime.datetime(int(et[0:4]),int(et[5:7]),int(et[8:10]),int(et[11:13]),int(et[14:16]),int(et[17:19]),int(et[20:26]))
                rt=datetime.datetime(int(rt[0:4]),int(rt[5:7]),int(rt[8:10]),int(rt[11:13]),int(rt[14:16]),int(rt[17:19]),int(rt[20:26]))
                t=str(rt-et)
                print(t)
                #name1=k.cell_value(i,0)
                #tp=int(k.cell_value(i,4))
                price=b.cell_value(i,6)
                if 'day' in t:
                    j=0
                    s=''
                    while t[j]!=' ':
                        s=s+t[j]
                        j=j+1
                    day=int(s)
                    j=0
                    while t[j]!=',':
                        j=j+1
                    j=j+2
                    s=''
                    while(t[j]!=':'):
                          s=s+t[j]
                          j=j+1
                    s=int(s)
                    if(s>0):
                        day=day+1
                    if(day>1):
                        price=day*price
                        print("Please Pay Rs.",price)
                d.write(i,6,price)
                c.save("toll_plaza.xls")
                print("You can go now.....Have a safe journey1!.....")
                flag=1
        if(flag==0):
            print("Entry not found")
if(num==3):
    time1=str(datetime.datetime.now())
    s=b.nrows
    bprice=0
    tprice=0
    cprice=0
    buprice=0
    i=0
    while(i<s):
        if(str(b.cell_value(i,2))==time1):
            if(b.cell_value(i,1)=='Bike'):
                bprice=bprice+b.cell_value(i,6)
    print(bprice)
else:
    print("enter the correct choice")

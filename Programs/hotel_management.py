import xlrd
import xlwt
import xlutils
from xlutils.copy import copy
import datetime
#import email.utils
import smtplib
def email(mail,rno,name,time):
    msg="Hello "+str(name)+" Welcome to our Hotel....Your Room no. is "+str(rno)+"\nYour Check-in time is "+str(time)+"\n Thank You!!"
    obj=smtplib.SMTP('smtp.gmail.com',587)
    obj.starttls()
    obj.login('divyaahuja1432@gmail.com','8890084260')
    obj.sendmail('divyaahuja1432@gmail.com',mail,msg)
    obj.close()
a=xlrd.open_workbook("Hotel_Management.xls")
b=a.sheet_by_index(0)
c=copy(a)
d=c.get_sheet(0)
def display():
    flag=0
    for i in range(1,4):
        if(b.cell_value(i,3)>0):
            flag=1
    if(flag==0):
        print("Sorry,No Rooms are available")
    else:
        print("   Available Rooms are:   ")
        print("No Type Price",sep='  ')
        for i in range(1,4):
            if(b.cell_value(i,3)>0):
                print(i, b.cell_value(i,0), b.cell_value(i,1),sep='  ')
print("Enter 1 for Check-In 2 for Check-Out")
num=int(input("enter the number"))
if(num==1):
    print("Welcome to our Hotel")
    display()
    n=int(input("Enter your choice which type of room you want"))
    h=a.sheet_by_index(n)
    #c=copy(a)
    j=c.get_sheet(n)
    z=h.nrows
    for i in range(1,z):
        if(h.cell_value(i,1)==1):
            rno=int(h.cell_value(i,0))
            break
    time=str(datetime.datetime.now())
    w=b.cell_value(n,3)-1
    print("Available no of rooms:",b.cell_value(n,3))
    d.write(n,3,w)
    j.write(i,1,0)
    c.save("Hotel_Management.xls")
    print("enter the details")
    name=input("enter your name")
    mail=input("enter your mail")
    print("Your Room no. is",rno)
    print("Confirmation message will be send to your mail")

    #amt=int(input"enter the amount"))
    a=xlrd.open_workbook("Hotel_Management.xls")
    k=a.sheet_by_index(4)
    c=copy(a)
    l=c.get_sheet(4)
    m=k.nrows
    l.write(m,0,name)
    l.write(m,1,mail)
    l.write(m,2,rno)
    l.write(m,3,time)
    l.write(m,4,n)
    c.save("Hotel_Management.xls")
elif(num==2):
    rno1=int(input("enter your room no"))
    k=a.sheet_by_index(4)
    c=copy(a)
    l=c.get_sheet(4)
    p=k.nrows
    cout=str(datetime.datetime.now())
    #print(p)
    for i in range(p-1,1,-1):
        if(k.cell_value(i,2)==rno1):
            #print(datenow,type(datenow))
            l.write(i,5,cout)
            cin=k.cell_value(i,3)
            cin=datetime.datetime(int(cin[0:4]),int(cin[5:7]),int(cin[8:10]),int(cin[11:13]),int(cin[14:16]),int(cin[17:19]),int(cin[20:26]))
            cout=datetime.datetime(int(cout[0:4]),int(cout[5:7]),int(cout[8:10]),int(cout[11:13]),int(cout[14:16]),int(cout[17:19]),int(cout[20:26]))
            #t=str(cout-cin)
            print(t)
            name1=k.cell_value(i,0)
            tp=int(k.cell_value(i,4))
            price=b.cell_value(tp,1)
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
                price=day*price
            l.write(i,6,price)
                    
            #checkout=k.cell_value(i,5)
            #print(checkout)
            #print(tp)
            break
    div=int(rno1%(tp*100))
    v=b.cell_value(tp,3)+1
    q=a.sheet_by_index(tp)
    #c=copy(a)
    r=c.get_sheet(tp)
    r.write(div,1,1)
    d.write(tp,3,v)
    c.save("Hotel_Management.xls")
    print("Thank You for visiting!! Please Pay Rs.",price,"\nHope to see you again...")
else:
    print("enter the correct choice")

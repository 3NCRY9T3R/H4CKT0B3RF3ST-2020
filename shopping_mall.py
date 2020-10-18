import xlutils
def display():
    print("S.No. Item Quantity Price",sep='  ')
    #for i in range(1,10):
       # print(\ni\t b.cell_value(i,0)\t b.cell_value(i,1)\t b.cell_value(i,2))
print("enter the number\n 1:Fruits\n 2:Vegetables\n 3:exit")
while(1):	
    num=int(input("enter the number"))
    from xlutils.copy import copy
    a=xlrd.open_workbook("shopping_mall.xls")
    if(num==1):
        print("1:apple 2:mango 3:papaya 4:orange 5:grapes 6:banana 7:water-melon 8:pomogranate 9:lichi ")
        num1=int(input("enter the number for which fruit you want to buy"))
        if(num1<=6):
            h=b.cell_value(num1,1)
            num2=int(input("enter the quantity"))
            if(h>=num2):
                price=num2*b.cell_value(num1,2)
                print("please pay",price ,"Rs.")
                num3=int(input("enter the amount"))
                g=b.cell_value(num1,1)-num2
                d.write(num1,1,g)
                c.save("shopping_mall.xls")
            else:
                print("remaining quantity is only ",b.cell_value(num1,1))
                print("enter 1 for puchase 2 for not purchase")
                np=int(input("enter the number"))
                if(np==1):
                    price=b.cell_value(num1,1)*b.cell_value(num1,2)
                    print("please pay",price ,"Rs.")
                    num3=int(input("enter the amount"))
                    d.write(num1,1,0)
                    c.save("shopping_mall.xls")
                else:
                    break
        else:
            print("enter the number from 1-9")
    elif(num==2):
        print("1:onion 2:tomato 3:potato 4:brinjsl 5:carrot 6:reddish")
        num5=int(input("enter the number for which vegetable you want to buy"))
        if(num5+9<=6):
            h=b.cell_value(num5+9,1)
            num6=int(input("enter the quantity"))
            if(h>=num6):
                price=num6*b.cell_value(num5+9,2)
                print("please pay",price ,"Rs.")
                num3=int(input("enter the amount"))
                g=b.cell_value(num5+9,1)-num2
                d.write(num5+9,1,g)
                c.save("shopping_mall.xls")
            else:
                print("remaining quantity is only ",b.cell_value(num5+9,1))
                print("enter 1 for puchase 2 for not purchase")
                np=int(input("enter the number"))
                if(np==1):
                    price=b.cell_value(num5+9,1)*b.cell_value(num5+9,2)
                    print("please pay",price ,"Rs.")
                    num3=int(input("enter the amount"))
                    d.write(num5+9,1,0)
                    c.save("shopping_mall.xls")
                else:
                    break
        else:
            print("enter the number from 1 to 6")
    elif(num==3):
        print("Thank you for visiting")
        break
    else:
        print("enter the correct number")
            
            

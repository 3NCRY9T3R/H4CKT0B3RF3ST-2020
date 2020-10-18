import cv2
import numpy as np
import matplotlib.pyplot as p
import random
a=cv2.imread(r"C:\Users\user\Pictures\My pics\DSC_0038.JPG")
#print(a)
#cv2.imshow("Image",a)
#
#y=np.random.randint(0,255,100)
##z=np.zeros((200,200))
##print(z)
##cv2.imshow("qwert",z)
##x=np.ones((200,200))
##print(x)
##cv2.imshow("qwert",x)
##img1=np.full((400,400),255,dtype=np.uint8)
#cv2.imshow("image",img1)
#img2=np.full((400,400),255)
#cv2.imshow("image",img2)
##x=np.random.randint(0,255,(200,200,3),dtype=np.uint8)
##print(x)
##cv2.imshow("image",x)
z=np.zeros((500,500))
x=random.randrange(0,500,5)
y=random.randrange(0,500,5)
q=random.randrange(0,500,5)
r=random.randrange(0,500,5)
fx=x
fy=y
tx=x
ty=y
z[fx:fx+5,fy:fy+5]=255
z[q:q+5,r:r+5]=255
print(z)
m=5
n=5
while True:
    k=cv2.waitKey(1)
    z[tx:tx+5,ty:ty+5]=0
    if(k==ord('w')):
        fx=fx-5
        if(fy==ty):
            tx=tx-5
        if(fy<ty):
            ty=ty-5
        if(fy>ty):
            ty=ty+5
        #z[fx:fx+5,fy:fy+5]=255
        #z[x:x+5,y:y+n]=0
        #x=x-5
        #z[x:x+m,y:y+5]=255
    if(k==ord('a')):
        #z[tx:tx+5,ty:ty+5]=0
        fy=fy-5
        if(fx==tx):
            ty=ty-5
        if(fx>tx):
            tx=tx-5
        if(fx<tx):
            tx=tx+5
        #y=y-5
        #z[x:x+5,y:y+n]=255
        #z[x:x+m,y:y+5]=255
    if(k==ord('s')):
        z[tx:tx+5,ty:ty+5]=0
        
        fx=fx+5
        if(fy==ty):
            tx=tx+5
        if(fy<ty):
            ty=ty-5
        if(fy>ty):
            ty=ty+5
        #x=x+5
##        z[x:x+m,y:y+5]=255
        #z[x:x+m,y:y+5]=255
    if(k==ord('d')):
        z[tx:tx+5,ty:ty+5]=0
        fy=fy+5
        if(fx==tx):
            ty=ty+5
        if(fx>tx):
            tx=tx-5
        if(fx<tx):
            tx=tx+5
##        y=y+5
##        z[x:x+5,y:y+n]=255
        #z[x:x+m,y:y+5]=255
    if(k==ord('x')):
        break
    if(fx==q and fy==r):
        q=random.randrange(0,500,5)
        r=random.randrange(0,500,5)
        #q=q+a
        #r=r+a
        z[q:q+5,r:r+5]=255
        
##        m=m+5
##        n=n+5
##        z[x:x+m,y:y+5]=255
    if(x==-5 or y==-5 or x==500 or y==500):
        print("OUT!!TRY AGAIN")
        break
    z[tx:tx+5,ty:ty+5]=255
    cv2.imshow("black",z)
cv2.destroyAllWindows

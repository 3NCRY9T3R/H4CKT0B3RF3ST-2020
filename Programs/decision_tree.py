import numpy as np
import random
import math
def etarget(ppos,pneg):
    if(ppos==0):
        value1=-1*((0)+(pneg*np.log2(pneg)))
    elif(pneg==0):
        value1=-1*((ppos*np.log2(ppos))+(0))
    elif(ppos==0 and pneg==0):
        value1=0
    else:
        value1=-1*((ppos*np.log2(ppos))+(pneg*np.log2(pneg)))
    if value1==-0.0:
        value1=0.0
    return value1
def entropy(ppos1,ppos2,a,b,c,d):
    value2=((ppos1/16)*etarget(a,b))+((ppos2/16)*etarget(c,d))
    return value2
test=   [[4.8, 3.4, 1.9, 0.2],
         [5  , 3  , 1.8, 0.2],
         [5  , 3.4, 1.6, 0.4],
         [5.2, 3.5, 1.5, 0.2],
         [5.2, 3.4, 1.4, 0.2],
         [4.7, 3.2, 1.6, 0.2],
         [4.8, 3.1, 1.6, 0.2],
         [5.4, 3.4, 1.5, 0.4],
           
         [7  , 3.2, 4.7, 1.4],
         [5.4, 3.2, 4.5, 1.5],
         [6.9, 3.1, 4.9, 1.5],
         [5.5, 2.3, 4  , 1.3],
         [6.5, 2.8, 4.5, 1.5],
         [5.7, 2.8, 4.5, 1.3],
         [6.3, 3.3, 4.7, 1.6],
         [4.9, 2.4, 3.3, 1  ]]
target=['Positive','Positive','Positive','Positive','Positive','Positive','Positive','Positive','negative','negative','negative','negative','negative','negative','negative','negative']

j=0
mina=test[0][0]
maxa=test[0][0]
for i in range(0,16):
    if(test[i][0]>maxa):
        maxa=test[i][0]
    if(test[i][0]<mina):
        mina=test[i][0]
j=0
minb=test[0][1]
maxb=test[0][1]
for i in range(0,16):
    if(test[i][1]>maxb):
        maxb=test[i][1]
    if(test[i][1]<minb):
        minb=test[i][1]
j=0
minc=test[0][2]
maxc=test[0][2]
for i in range(0,16):
    if(test[i][2]>maxc):
        maxc=test[i][2]
    if(test[i][2]<minc):
        minc=test[i][2]
j=0
mind=test[0][3]
maxd=test[0][3]
for i in range(0,16):
    if(test[i][3]>maxd):
        maxd=test[i][3]
    if(test[i][3]<mind):
        mind=test[i][3]
mina=math.ceil(mina)
maxa=math.ceil(maxa)
minb=math.ceil(minb)
maxb=math.ceil(maxb)
minc=math.ceil(minc)
maxc=math.ceil(maxc)
mind=math.ceil(mind)
maxd=math.ceil(maxd)
A=random.randrange(mina,maxa,1)
print(A)
B=random.randrange(minb,maxb,1)
print(B)
C=random.randrange(minc,maxc,1)
print(C)
D=random.randrange(mind,maxd,1)
print(D)
A=5.0
B=3.0
C=4.2
D=1.4
#list=[A,B,C,D]
aP=0
ap=0
aN=0
an=0
for i in range(16):
    if(A<=test[i][0]):
        if(target[i]=='Positive'):
            aP=aP+1
        elif(target[i]=='negative'):
            aN=aN+1
    else:
        if(target[i]=='Positive'):
            ap=ap+1
        elif(target[i]=='negative'):
            an=an+1
bP=0
bp=0
bN=0
bn=0
for i in range(16):
    if(B<=test[i][1]):
        if(target[i]=='Positive'):
            bP=bP+1
        elif(target[i]=='negative'):
            bN=bN+1
    else:
        if(target[i]=='Positive'):
            bp=bp+1
        elif(target[i]=='negative'):
            bn=bn+1
cP=0
cp=0
cN=0
cn=0
for i in range(16):
    if(C<=test[i][2]):
        if(target[i]=='Positive'):
            cP=cP+1
        elif(target[i]=='negative'):
            cN=cN+1
    else:
        if(target[i]=='Positive'):
            cp=cp+1
        elif(target[i]=='negative'):
            cn=cn+1
dP=0
dp=0
dN=0
dn=0
for i in range(16):
    if(D<=test[i][3]):
        if(target[i]=='Positive'):
            dP=dP+1
        elif(target[i]=='negative'):
            dN=dN+1
    else:
        if(target[i]=='Positive'):
            dp=dp+1
        elif(target[i]=='negative'):
            dn=dn+1
print(aP)
print("dN=",an)
print("dp=",dp)
print("dn=",dn)
pa1=aP/(aP+aN)
pa2=aN/(aP+aN)
pa3=ap/(ap+an)
pa4=an/(ap+an)
pb1=bP/(bP+bN)
pb2=bN/(bP+bN)
print("pb1",pb1)
print("pb2",pb2)
pb3=bp/(bp+bn)
pb4=bn/(bp+bn)
pc1=cP/(cP+cN)
pc2=cN/(cP+cN)
pc3=cp/(cp+cn)
pc4=cn/(cp+cn)
pd1=dP/(dP+dN)
pd2=dN/(dP+dN)
pd3=dp/(dp+dn)
pd4=dn/(dp+dn)
print("pa1=",pa1)
print("pd1=",pd1)
eA=etarget(pa1,pa2)
print("eA=",eA)
ea=etarget(pa3,pa4)
print("ea=",ea)
eB=etarget(pb1,pb2)
print("eB=",eB)
eb=etarget(pb3,pb4)
print("eb=",eb)
eC=etarget(pc1,pc2)
print("eC=",eC)
ec=etarget(pc3,pc4)
print("ec=",ec)
eD=etarget(pd1,pd2)
print("eD=",eD)
ed=etarget(pd3,pd4)
print("ed=",ed)

e1=entropy((aP+aN),(ap+an),pa1,pa2,pa3,pa4)
e2=entropy((bP+bN),(bp+bn),pb1,pb2,pb3,pb4)
e3=entropy((cP+cN),(cp+cn),pc1,pc2,pc3,pc4)
e4=entropy((dP+dN),(dp+dn),pd1,pd2,pd3,pd4)
print("entropy for A=",e1)
print("entropy for B=",e2)
print("entropy for C=",e3)
print("entropy for D=",e4)
ig1=1-e1
ig2=1-e2
ig3=1-e3
ig4=1-e4
print("igA=",ig1)
print("igB=",ig2)
print("igC=",ig3)
print("igD=",ig4)
ig=[ig1,ig2,ig3,ig4]
for i in range(16):
    igmin=np.min(ig)
    igmax=np.max(ig)
print("igmin",igmin)
print("igmax",igmax)

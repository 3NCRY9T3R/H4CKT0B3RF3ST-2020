import cv2
##a=cv2.imread(r"C:\Users\user\Desktop\projectimg\3.jpg")
##print(a)
##print(a.shape)
###b=cv2.resize(a,(0,0),fx=2,fy=2)
###b=cv2.resize(a,(150,150))
###cv2.imshow("Image1",b)
###cv2.imshow("Image",a)
##a=cv2.resize(a,(500,500))
###b=cv2.cvtColor(a,cv2.COLOR_BGR2GRAY)
###cv2.imshow("Image",b)
##b=cv2.cvtColor(a,cv2.COLOR_BGR2RGB)
##cv2.imshow("Image",b)
####b=cv2.cvtColor(a,cv2.COLOR_BGR2HSV)
##cv2.imshow("Image",b)
m=cv2.CascadeClassifier(r"C:\Users\user\Desktop\pythonprogs\haarcascade\haarcascade_frontalface_default.xml")
a=cv2.VideoCapture(0)
while True:
    c,d=a.read()
    d=cv2.flip(d,1)
    d=cv2.resize(d,(500,500))
    b=cv2.cvtColor(d,cv2.COLOR_BGR2GRAY)
    f=m.detectMultiScale(b)
    print(f)
##    for(x,y,w,h) in f:
##        cv2.rectangle(d,(x,y),(x+w,y+h),(0,255,0),2)
    if len(f)==2:
        f1=d[f[0][1]:f[0][1]+f[0][3],f[0][0]:f[0][0]+f[0][2]]
        f2=d[f[1][1]:f[1][1]+f[1][3],f[1][0]:f[1][0]+f[1][2]]
        p=cv2.resize(f1,(f[1][3],f[1][2]))
        q=cv2.resize(f2,(f[0][3],f[0][2]))
        d[f[0][1]:f[0][1]+f[0][3],f[0][0]:f[0][0]+f[0][2]]=q
        d[f[1][1]:f[1][1]+f[1][3],f[1][0]:f[1][0]+f[1][2]]=p
    #n=faces(0)
    #print(n)
    cv2.imshow("image",d)
    k=cv2.waitKey(1)
    if k==ord('a'):
        break
a.release()

# -*- coding: utf-8 -*-
"""
Created on Thu Sep 14 12:17:15 2020

@author: arideep dutta
"""


import cv2

cascade = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")

#pass input image

image = cv2.imread("/Users/arideep/Desktop/istockphoto-1146473249-170667a.jpg")
#image = cv2.imread("/Users/arideep/Desktop/pic2.jpeg")
gray_image = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

faces = cascade.detectMultiScale(gray_image,1.1,5)


# iterating over faces 

for (x,y,w,h) in faces:
    cv2.rectangle(image, (x,y), (x+w,y+h), (0,0,255),3)

cv2.rectangle(image,(0,0),(300,20),(255,255,255),-1)
cv2.putText(image," faces detected = " + str(len(faces)),(0,25),cv2.FONT_HERSHEY_TRIPLEX,0.5,(0,0,0),1)
    
    
cv2.imshow("Live Facecount",image)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Face Detection using OpenCV

"""
files used --
image: http://tinyurl.com/y3l3y4nh 
haarcascade file: http://tinyurl.com/y2tau42o
"""

import numpy as np
import matplotlib.pyplot as plt
import cv2

img = plt.imread("Group.jpg")
plt.imshow(img) 

#print(img.shape)

model = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
faces = model.detectMultiScale(img)

for face in faces:
    x,y,w,h = face
    
    img = cv2.rectangle(img, (x,y), (x+w, y+h), (0,0,0), 2)
    
    plt.imshow(img)

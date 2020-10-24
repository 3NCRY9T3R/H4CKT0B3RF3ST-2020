#!/usr/bin/env python
# -*- coding: utf-8 -*-



# importing iris from scikit-learn
from sklearn.datasets import load_iris
# importing accuracy_score to check the accuracy of the prediction
from sklearn.metrics import accuracy_score  
# importing train_test_split to split the data in training and testing parts
from sklearn.model_selection import train_test_split
# importing the distance method to measure the Eucledian distance
from scipy.spatial import distance
# loading iris dataset to a local object
iris = load_iris()


# taking the iris features in variable X
X = iris.data
# taking the iris lables in variable y
y = iris.target
# splitting the features and lables in training and testing part
# Size of the testing data is the 20% of the total data i.e 30 examples out of 150
X_train,X_test,y_train,y_test = train_test_split(X,y, test_size=float(input("Enter the size of Testing DATASET in scale of 0 to 1 : ")))

# creating the KNNClassifier class
class KNNClassifier:
    def fit(self, X_train, y_train):                # creating the fit method
        self.X_train = X_train                      # getting the features of the training dataset
        self.y_train = y_train                      # getting the lables of the training dataset

    def predict(self, X_test):                      # creating the pridict method
        pre = []
        for i in X_test:
            res = self.close(i)                     # getting the closeset value from the close method
            pre.append(y_train[res])                # apppending the prediction list with the lable of closest feature
        return pre                                  # returning the predicted array

    def close(self, i):                             # creating the close method
        bestdist = distance.euclidean(self.X_train[0],i)   # assuming that first index is the best index
        bestinx = 0
        for j in range(len(self.X_train)):
            if distance.euclidean(self.X_train[j],i) < bestdist:   #measuring Euclidean distance
                bestinx = j
                bestdist = distance.euclidean(self.X_train[j],i)

        return bestinx                              # returning the closest index


# creating the classifier object clf.
clf = KNNClassifier()
# fitting the Training Dataset in the object.
clf.fit(X_train, y_train)
# storing the predicted output in ans.
ans = clf.predict(X_test)
# checking the Accuracy Score of the prediction 
print("Accuracy Of KNNClassifier : "+str(accuracy_score(ans, y_test)*100) +"%")

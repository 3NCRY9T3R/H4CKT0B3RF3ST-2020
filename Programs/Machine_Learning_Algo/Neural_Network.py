# Creating Neural Network model from Scratch with Backpropagation

import numpy as np
from sklearn.datasets import load_digits

mnist_digits = load_digits()

x = mnist_digits.data
y = mnist_digits.target



class Neural_Network(object):
  def __init__(self,input_dim):
    #parameters
    self.inputsize = input_dim[1]
    self.outputsize = input_dim[0]
    self.hiddensize = 3
    #weights
    self.W1 = np.random.randn(self.inputsize, self.hiddensize)
    self.W2 = np.random.randn(self.hiddensize, self.outputsize)

  def forward(self, X):
    #forward propagation through the network
    self.z = np.dot(X, self.W1) #dot product of X (input) and weights set 1
    self.z2 = self.sigmoid(self.z) #activation function
    self.z3 = np.dot(self.z2, self.W2) #dot product of hidden layer with the weights set 2
    o = self.sigmoid(self.z3) #final activation layer
    return o #returning the output

  def sigmoid(self, s):
    return 1/(1+np.exp(-s))

  def sigmoidPrime(self, s):
    return s * (1 - s)

  def backward(self, X, y, o):
    # backward propagation through the network
    self.o_error = y - o # error in input
    self.o_delta = self.o_error * self.sigmoidPrime(o) # applying derivative of sigmoid to the output
    self.z2_error = self.o_delta.dot(self.W2.T) # how much hidden layer weig hts contributed to the output error
    self.z2_delta = self.z2_error * self.sigmoidPrime(self.z2) # applying derivative of sigmoid to z2
    self.W1 += X.T.dot(self.z2_delta) # adjusting the first set of weights (input -----> hidden)
    self.W2 += self.z2.T.dot(self.o_delta) # adjusting second set of weights (hidden -----> output)

  def train(self, X, y):
    o = self.forward(X)
    self.backward(X, y, o)

NN = Neural_Network(input_dim=x.shape)
for i in range(100): #trains the NN 1000 times
  print("Iteration : " + str(i+1))
  print("Input : \n" + str(x))
  print("Actual output : \n" + str(y))
  print("Predicted output : \n" + str(NN.forward(x)))
  print("Loss (RMSE) : {0:.3f}".format(np.sqrt(np.mean(np.square(y - NN.forward(x)))))) # root mean sum squared loss
  print("\n")
NN.train(x, y)

# Python 3 program to print all 
# sides and angles of right 
# angle triangle given one side 
import math 

PI = 3.1415926535

# Function to find angle A 
# Angle in front of side a 
def findAnglesA( a, b, c): 
	
	# applied cosine rule 
	A = math.acos((b * b + c * c - a * a) /
							(2 * b * c)) 

	# convert into degrees 
	return A * 180 / PI 

# Function to find angle B 
# Angle in front of side b 
def findAnglesB(a, b, c): 

	# applied cosine rule 
	B = math.acos((a * a + c * c - b * b) /
							(2 * a * c)) 

	# convert into degrees 
	# and return 
	return B * 180 / PI 

# Function to print all angles 
# of the right angled triangle 
def printAngles(a, b, c): 

	x = a 
	y = b 
	z = c 
	
	# for calculate angle A 
	A = findAnglesA(x, y, z) 

	# for calculate angle B 
	B = findAnglesB(x, y, z) 
	
	print("Angles are A = ", A, 
		", B = ", B , ", C = ", "90 ") 

# Function to find other two sides 
# of the right angled triangle 
def printOtherSides(n): 
	
	# if n is odd 
	if (n & 1) : 
		
		# case of n = 1 handled 
		# separately 
		if (n == 1): 
			print("-1") 
		else: 
			
			b = (n * n - 1) // 2
			c = (n * n + 1) // 2
			print("Side b = ", b, 
				" Side c = ", c) 
	
	else: 
		
		# case of n = 2 handled 
		# separately 
		if (n == 2) : 
			print("-1") 
		else: 
			b = n * n // 4 - 1; 
			c = n * n // 4 + 1; 
			print("Side b = " , b, 
				", Side c = " , c) 
		
	# Print angles of the triangle 
	printAngles(n, b, c) 

# Driver Code 
if __name__ == "__main__": 
	a = 12

	printOtherSides(a) 

# This code is contributed 
# by ChitraNayal 

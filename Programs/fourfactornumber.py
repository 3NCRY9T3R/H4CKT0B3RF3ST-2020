# Python 3 implementation of above approach 
from math import sqrt 

# Declare the vector of factors 
# for storing the 
factors = [] 

# function to find out the factors 
# of a number 
def findFactors(n): 
	
	# Loop until the i reaches the sqrt(n) 
	for i in range(1, int(sqrt(n)) + 1, 1): 
		
		# Check if i is a factor of n 
		if (n % i == 0): 
			
			# if both the factors are same 
			# we only push one factor 
			if ((n / i) == i): 
				factors.append(i) 

			else: 
				
				# factor1 is pushed 
				factors.append(n / i) 

				# factor2 is pushed 
				factors.append(i) 
		
# Function to find the maximum product 
def findProduct(n): 
	
	# Initialize the product with -1 
	product = -1
	si = len(factors) 
	for i in range(si): 
		for j in range(si): 
			for k in range(si): 
				for l in range(si): 
					
					# Find the sum of factors and store it in s 
					s = (factors[i] + factors[j] +
						factors[k] + factors[l]) 

					# Compare whether it is equal to the n 
					if (s == n): 
						
						# product of factors 
						p = (factors[i] * factors[j] *
							factors[k] * factors[l]) 

						# Check whether we have a better 
						# p now if yes update 
						if (p > product): 
							product = p 
					
	return product 

# Driver code 
if __name__ == '__main__': 
	n = 10

	# initializes the vectors with 
	# the divisors of n 
	findFactors(n) 

	# prints out the maximised product. 
	print(int(findProduct(n))) 

# This code is contributed by 
# Sanjit_Prasad 

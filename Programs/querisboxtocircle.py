# Python 3 implementation of 
# above approach 

MAX = 50

# Print the answer to each query 
def solveQuery(n, q, qi, qj): 

	arr = [None] * MAX
	for i in range(n + 1): 
		arr[i] = 0

	for k in range(q): 

		# setting the flag 
		# for exception 
		flag = 0

		# replacing the greater 
		# element in i and j 
		if (qj[k] < qi[k]): 
			qj[k], qi[k] = qi[k], qj[k] 

		# checking if that box is not 
		# used in previous query. 
		if (arr[qi[k]] != 0 or
			arr[qj[k]] != 0): 
			flag = 1

		# checking if connecting 
		# to the same box 
		elif (qi[k] == qj[k]): 
			flag = 1

		else : 

			# case 1: x < i and y 
			# lies between i and j 
			for i in range(1, qi[k]) : 
				if (arr[i] != 0 and
					arr[i] < qj[k] and
					qi[k] < arr[i]): 
					flag = 1
					break

			# case 2: x lies between 
			# i and j and y >j 
			if (flag == 0): 
				for i in range(qi[k] + 1, qj[k]) : 
					if (arr[i] != 0 and
						arr[i] > qj[k]): 
						flag = 1
						break
					
		# if flag is not reset inbetween. 
		if (flag == 0): 
			print("YES") 
			arr[qi[k]] = qj[k] 
			arr[qj[k]] = qi[k] 
		
		else: 
			print("NO") 

# Driver code 
if __name__ == "__main__": 
	n = 10
	q = 7
	qi = [ 1, 2, 2, 2, 9, 10, 8 ] 
	qj = [ 5, 7, 3, 4, 9, 9, 6 ] 

	solveQuery(n, q, qi, qj) 

# This code is contributed 
# by ChitraNayal 

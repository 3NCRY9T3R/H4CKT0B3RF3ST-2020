package main

import ("fmt"
"math")

func iterativeDigitsCount(number int) int {  
 count := 0  
 for number != 0 {  
  number /= 10  
  count += 1  
 }  
 return count  
  
}

func is_armstrong(num int) int {

	var rem, aNum int = 0, 0
	power := iterativeDigitsCount(num)
	for num > 0{

		rem = num % 10
		aNum += int(math.Pow(float64(rem), float64(power)))
		num /= 10
	}

	return aNum
}

func main() {

	var input, choice int = 0, 0
	fmt.Println(`Choose an operation to perform
	1. Check if a number is Armstrong Number
	2. Print all numbers between a given range`)

	fmt.Scan(&choice)

	switch choice{
	case 1:
		fmt.Println("Enter a Number to Check : ")
		fmt.Scan(&input)
		if is_armstrong(input) == input {

			fmt.Printf("%d number is an Armstrong Number\n", input)

		}else {

			fmt.Printf("%d is not an Armstrong Number\n", input)

		}

	case 2:
		var start, end int
		fmt.Println("Enter the range : ")
		fmt.Scan(&start, &end)
		count := 0
		for i:=start; i<=end; i++{

			if is_armstrong(i) == i{
				fmt.Println(i)
				count++
			}

		}
		if count == 0{

			fmt.Printf("No Armstrong Number in between %d and %d", start, end)

		}

	}

}




package main

// Importing the "fmt" library for Basic I/O
import "fmt"

// Palindrom function that takes input and revert the digits
func palindrom(num int) int {
	pnum, rem := 0, 0

	for num >= 1 {
		rem = num % 10
		pnum = rem + pnum*10
		num /= 10
	}

	return pnum

}

// Main function
func main() {

	var input int = 0
	fmt.Println("Plaindrome Check In GO Lang")
	fmt.Print("\n\nEnter the Input to check : ")

	// Taking input
	fmt.Scan(&input)

	// Comparing the Input with its revert to verify Palindrom Number
	if palindrom(input) == input {
		fmt.Printf("\n%d is a Palindrom Number\n", input)
	} else {
		fmt.Printf("\n%d is not a Palindrom Number\n", input)
	}

}

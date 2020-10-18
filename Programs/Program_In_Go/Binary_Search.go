package main

import "fmt"

//Linear Sort
func sort(arr []int) []int{

	for i:= 0; i< len(arr); i++{
		for j := i+1; j < len(arr); j++{
			if arr[i] > arr[j]{
				tmp := arr[j]
				arr[j] = arr[i]
				arr[i] = tmp
			} 
		}
	}

	return arr

	}

// Binary Search Function
func binarySearch(arr []int, query int) int {

	last := len(arr) - 1 
	first := 0
	mid := 0

		for first <= last {
		mid = first+ (last - first) / 2

		if query == arr[mid]{

			return mid

		} else if arr[mid] > query {

			last = mid - 1

		} else {

			first = mid + 1

		}
	}

return -1 
}

//Main Function
func main() {

	size := 0

	fmt.Println("Enter Size of Array : ")
	fmt.Scan(&size)


	arr := make([]int, size)

	fmt.Println("Enter the Array : ")
	for i := 0; i<size; i++ {

		fmt.Scan(&arr[i])
		}

	query :=0
	fmt.Println("Enter the number you want to search :  ")
	fmt.Scan(&query)


//Checking the Output of Binary Search
	out := binarySearch(sort(arr), query)
	if out == -1 {
fmt.Println("Number not found in the Array")
	} else {
fmt.Println("The number is present at index ", out)
	}


}

#CODE

arr=[]
x=int(input())
for i in range(x):
    ele=input()
    arr.append(str(ele))
def isPalindromicArray(arr):
    n=len(arr)
    if n<=1:
        return True
    return arr[0].casefold()==arr[n-1].casefold() and isPalindromicArray(arr[1:n-1])
if isPalindromicArray(arr):
    print("Yes")
else:
    print("No")

#CODE

arr=[]
x=int(input())
for i in range(x):
    ele=int(input())
    arr.append(ele)
def isMirrorInverse(arr):
    n=len(arr)
    result=[0]*n
    for i in range(n):
        v=arr[i]
        p=i+1
        result[v-1]=p
    if result==arr:
        return "Yes"
    return "No"
print(isMirrorInverse(arr))

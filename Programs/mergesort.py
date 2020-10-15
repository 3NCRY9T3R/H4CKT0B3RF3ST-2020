def mergesort(seq):
    if len(seq) > 1:
        mid = len(seq)// 2
        left = seq[:mid]
        right = seq[mid:]

        mergesort(left)
        mergesort(right)
        
        i = j = k = 0

        while i < len(left) and j < len(right):

            if left[i] < right[j]:
                seq[k]=left[i]
                i+=1
            else:
                seq[k]=right[j]
                j+=1
            
            k+=1

        while len(left) > i:

            seq[k]=left[i]
            i+=1
            k+=1
        
        while len(right) > j:
            
            seq[k] = right[j]
            j+=1
            k+=1

def printlist(seq):
    for num in seq:
        print(num)

if __name__ == "__main__":
    arr = [1,3,2,54,6548,12,65,1,96,36,65,9]
    mergesort(arr)
    printlist(arr)
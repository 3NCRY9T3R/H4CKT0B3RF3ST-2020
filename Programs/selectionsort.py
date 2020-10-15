
def selSort(seq):
    for i in range(len(seq)):
        mindex = i
        for j in range(i+1,len(seq)):
            if seq[j] < seq[mindex]:
                mindex = j
        seq[i],seq[mindex]=seq[mindex],seq[i]

if __name__ == "__main__":
    arr = [5,6,8,12,4,2,1,3]
    selSort(arr)
    print(arr)

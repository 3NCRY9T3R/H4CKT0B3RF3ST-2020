import sys


def compute_min_refills(distance, tank,size, stops):
    # write your code here
    stops.insert(0,0)
    stops.append(distance)
    numRefills,currentRefill=0,0
    
    #print(stops)
    while currentRefill<=(size):
        lastRefill=currentRefill
        while currentRefill<=(size) and stops[currentRefill+1]-stops[lastRefill]<=tank:
            currentRefill+=1
        if currentRefill==lastRefill:
            return -1
        if currentRefill<=size:
            numRefills+=1
    return numRefills



d=int(input())
m=int(input())
stopsi=int(input())
stops = list(map(int, input().split()))
print(compute_min_refills(d, m,stopsi, stops))

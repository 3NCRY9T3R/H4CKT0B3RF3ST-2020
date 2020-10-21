#Given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board.
#A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. 
#Print all such configurations.

def issafe(row,col,solution,n):
    #check in vertical direction
    i=row-1
    while i>=0:
        if solution[i][col] == 1:
            return False
        i-=1
        
    #check in left diagonal
    i=row-1
    j=col-1
    while i>=0 and j>=0:
        if solution[i][j] == 1:
            return False
        i-=1
        j-=1

    #check in right diagonal
    i=row-1
    j=col+1
    while i>=0 and j<n:
        if solution[i][j] == 1:
            return False
        i-=1
        j+=1
    return True


def nQueenhelper(row,n,solution):
    if row==n:
        for i in range(n):
            for j in range(n):
                print(solution[i][j],end=" ")
        print()
        return
    for col in range(n):
        if issafe(row, col, solution,n):
            solution[row][col] = 1
            nQueenhelper(row+1,n,solution)
            solution[row][col] = 0
    return

def nQueen(n):
    solution=[[0 for i in range(n)] for j in range(n)]
    nQueenhelper(0,n,solution)
    

n=int(input())

/*Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell is empty), you need to find out whether the Sudoku puzzle can be solved or not i.e. return true or false.
Input Format :
9 Lines where ith line contains ith row elements separated by space
Output Format :
 true or false
Sample Input :
9 0 0 0 2 0 7 5 0 
6 0 0 0 5 0 0 4 0 
0 2 0 4 0 0 0 1 0 
2 0 8 0 0 0 0 0 0 
0 7 0 5 0 9 0 6 0 
0 0 0 0 0 0 4 0 1 
0 1 0 0 0 5 0 8 0 
0 9 0 0 7 0 0 0 4 
0 8 2 0 4 0 0 0 6
Sample Output :
true*/

bool check(int board[][9],int row, int col, int val){
	for(int k=0;k<9;k++){
		if(board[row][k]==val) return false;
		if(board[k][col]==val) return false;
	}
	int toprow=row-row%3;
	int topcol=col-col%3;
	for(int c=toprow; c<toprow+3;c++){
		for(int d=topcol;d<topcol+3;d++){
			if(board[c][d]==val) return false;
		}
	}
	return true;
}

bool helper(int board[][9],int row, int col){
	if(row==9) return true;
	if(col==9) return helper(board, row+1,0);
	if(board[row][col]!=0) return helper(board,row,col+1);
	for(int k=1;k<=9;k++){
		if(check(board, row, col,k)){
			board[row][col]=k;
			if(helper(board,row,col+1))
			return true;
		}
		board[row][col]=0;
	}
	return false;
}

bool sudokuSolver(int board[][9]){
	return helper(board,0,0);
}


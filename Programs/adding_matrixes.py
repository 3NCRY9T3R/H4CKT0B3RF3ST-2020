'''
Author: Aditya Mangal 
Date:  20 september,2020
Purpose: python practise problem

'''


def input_matrixes(m, n):
    output = []

    for i in range(m):
        row = []
        for j in range(n):
            user_matrixes = int(input(f'Enter number on [{i}][{j}]\n'))
            row.append(user_matrixes)
        output.append(row)

    return output


def sum(A, B):
    output2 = []

    for i in range(len(A)):
        row2 = []
        for j in range(len(A[0])):
            row2.append(A[i][j] + B[i][j])

        output2.append(row2)

    return output2


if __name__ == "__main__":
    rows = int(input('Enter the m rows of matrixes.\n'))
    columns = int(input('Enter the n columns of matrixes.\n'))

    print('Enter your first matrix.\n')
    A = input_matrixes(rows, columns)

    print('Enter your secound matrix.\n')
    B = input_matrixes(rows, columns)

    result = sum(A, B)
    print('Your sum of matrixes are :-\n')
    for i in range(len(result)):
        print(result[i])

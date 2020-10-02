#include <iostream>
using namespace std;

void selectionSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int low = input[i], index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (low > input[j])
            {
                index = j;
                low = input[j];
            }
        }
        int temp=input[i];
        input[i]=input[index];
        input[index]=temp;
    }
}

int main()
{
    int n=6;
    int input[] = {3, 1, 4, 5, 2, 7};
    selectionSort(input, n);

    for (int i = 0; i < n; i++)
    {
        cout << input[i] << ' ';
    }
    return 0;
}

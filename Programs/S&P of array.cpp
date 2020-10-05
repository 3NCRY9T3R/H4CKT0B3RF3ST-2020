#include<iostream>

    using namespace std;

    int main ()

    {

        int arr[10], n, i, sum = 0, pro = 1;

        cout << "Enter the size of the array : ";

        cin >> n;

        cout << "\nEnter the elements of the array : ";

        for (i = 0; i < n; i++)

        cin >> arr[i];

        for (i = 0; i < n; i++)

        {

            sum += arr[i];

            pro *= arr[i];

        }

        cout << "\nSum of array elements : " << sum;

        cout << "\nProduct of array elements : " << pro;

        return 0;

    }

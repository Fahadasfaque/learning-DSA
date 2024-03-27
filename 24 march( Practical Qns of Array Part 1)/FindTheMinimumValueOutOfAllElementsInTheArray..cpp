#include<iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

main()
{
    int arr[] = { 10, 20, 30, 40, 50, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The smallest element in the array is " << findMin(arr, n) << endl;
}
#include<iostream>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = arr[1];
    if (largest < secondLargest)
    {
        swap(largest, secondLargest);
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

main(){
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "The second largest element is " << findSecondLargest(arr, n) << endl;
}
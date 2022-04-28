#include <iostream>
using namespace std;

int maxEle(int arr[], int size)
{
    int maxi = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
}

int minEle(int arr[], int size)
{
    int mini = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
    }
    return mini;
}

int main()
{
    cout << "Enter the no. of elements -> ";
    int n;
    cin >> n;

    // this is a bad practice, so we'll use an array of 100 elements
    // int arr[n];
    int arr[100];
    // taking input in array
    cout << "Enter all the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum element of the array is " << maxEle(arr, n)
         << " and Minimum element of the array is " << minEle(arr, n);
    return 0;
}
#include <iostream>
using namespace std;

void rotateCyclically(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
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

    cout << "Before rotating -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateCyclically(arr, n);

    cout << "After rotating -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
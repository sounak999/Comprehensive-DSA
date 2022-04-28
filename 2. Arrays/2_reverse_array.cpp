#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
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

    cout << "Array before reversing -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 0, n - 1);

    cout << "Array after reversing -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
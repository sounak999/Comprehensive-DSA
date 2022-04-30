#include <iostream>
using namespace std;

void segregateElements(int arr[], int n)
{
    // s -> positive, e -> negative
    int temp[n] = {0};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            temp[k++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            temp[k++] = arr[i];
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
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

    cout << "Before segregating -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    segregateElements(arr, n);

    cout << "After segregating -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
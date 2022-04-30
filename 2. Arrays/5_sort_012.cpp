#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    int k = 0;
    while (cnt0--)
    {
        arr[k++] = 0;
    }

    while (cnt1--)
    {
        arr[k++] = 1;
    }

    while (cnt2--)
    {
        arr[k++] = 2;
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

    cout << "Before sorting -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort012(arr, n);

    cout << "After sorting -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
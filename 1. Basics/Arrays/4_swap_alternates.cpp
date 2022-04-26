#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternates(int *arr, int n)
{
    int st = 0, en = n - 1;
    while (st < en)
    {
        swap(arr[st], arr[en]);
        st += 2;
        en -= 2;
    }
}

int main()
{
    cout << "Enter the number of elements -> ";
    int n;
    cin >> n;
    int *arr = new int[n];

    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swapAlternates(arr, n);
    printArray(arr, n);
    return 0;
}
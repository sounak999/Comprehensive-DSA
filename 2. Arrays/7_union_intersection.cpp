#include <iostream>
#include <set>
using namespace std;

set<int> unionOfSortedArrays(int a[], int n, int b[], int m)
{
    set<int> s;

    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    for (int i = 0; i < m; i++)
        s.insert(b[i]);

    return s;
}

void intersectionOfSortedArrays(int arr[], int n, int brr[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
            i++;
        else if (brr[j] < arr[i])
            j++;
        else
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    cout << "Enter the no. of elements in the first array-> ";
    int n;
    cin >> n;

    int arr[100];
    cout << "Enter all the sorted elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the no. of elements in the second array-> ";
    int m;
    cin >> m;

    int brr[100];
    cout << "Enter all the sorted elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    cout << "\nBefore Union and Intersection -> ";
    cout << "\n\nfirst array -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "second array -> ";
    for (int i = 0; i < m; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    set<int> unionAns = unionOfSortedArrays(arr, n, brr, m);

    cout << "\nAfter Union -> ";
    for (int x : unionAns)
        cout << x << " ";
    cout << endl;

    cout << "After Intersection -> ";
    intersectionOfSortedArrays(arr, n, brr, m);

    return 0;
}
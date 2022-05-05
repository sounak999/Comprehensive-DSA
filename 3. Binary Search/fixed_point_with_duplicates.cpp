#include <iostream>
using namespace std;

int fixedPointDup(int arr[], int s, int e)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;
    if (mid == arr[mid])
        return mid;

    int left = fixedPointDup(arr, s, min(arr[mid], mid - 1));
    if (left >= 0)
        return left;

    return fixedPointDup(arr, max(mid + 1, arr[mid]), e);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << fixedPointDup(arr, 0, n - 1);
    return 0;
}
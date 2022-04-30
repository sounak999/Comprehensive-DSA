#include <iostream>
using namespace std;

int findDuplicate(int nums[], int n)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
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

    cout << "Our Array -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Duplicate element will be -> " << findDuplicate(arr, n-1);

    return 0;
}
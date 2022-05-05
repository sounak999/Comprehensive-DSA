#include<iostream>
using namespace std;

int fixedPoint(int arr[], int n)
{
    int s = 0, e = n-1;
    while(s <= e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == mid)
            return mid;
        else if(mid > arr[mid])
            s = mid+1;
        else
            e = mid-1;
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<fixedPoint(arr, n);    
    return 0;
}
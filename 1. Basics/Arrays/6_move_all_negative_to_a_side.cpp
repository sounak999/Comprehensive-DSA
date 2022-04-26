void segregateElements(int arr[], int n)
{
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            v1.push_back(arr[i]);
        else
            v2.push_back(arr[i]);
    }

    for (int i = 0; i < v2.size(); i++)
        v1.push_back(v2[i]);

    for (int i = 0; i < n; i++)
        arr[i] = v1[i];
}
#include <iostream>
using namespace std;
int main()
{
/*
    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
    1 2 3 4 5 6 5 4 3 2 1
*/
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        j -= 2;
        while (j > 0)
        {
            cout << j-- << " ";
        }
        cout << endl;
    }
    return 0;
}
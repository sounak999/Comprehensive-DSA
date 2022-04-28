#include <iostream>
using namespace std;
int main()
{
    /*
        1
        2*2
        3*3*3
        4*4*4*4
        4*4*4*4
        3*3*3
        2*2
        1
    */
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << "*";
            }
        }   
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << "*";
            }
        }   
    }
    return 0;
}
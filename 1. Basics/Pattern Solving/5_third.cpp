#include <iostream>
using namespace std;
int main()
{
    /*
        1
        2*3
        4*5*6
        7*8*9*10
        7*8*9*10
        4*5*6
        2*3
        1
    */

    int n;
    cin >> n;

    int counter = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << counter << endl;
            }
            else
            {
                cout << counter << "*";
            }

            counter++;
        }
    }

    for (int i = n; i >= 1; i--)
    {
        int k = counter - i;
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << k << endl;
            }
            else
            {
                cout << k << "*";
            }

            k++;
        }

        counter -= i;
    }

    return 0;
}
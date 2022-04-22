#include <iostream>
using namespace std;
int main()
{
    /*
        A
        A B A
        A B C B A
        A B C D C B A
        A B C D E D C B A
    */

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        int j;
        for (j = 0; j < i; j++)
        {
            cout << char(ch + j) << " ";
        }

        j -= 2;
        while (j >= 0)
        {
            cout << char(ch + j) << " ";
            j--;
        }

        cout << endl;
    }
    return 0;
}
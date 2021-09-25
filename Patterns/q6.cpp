#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int l = k + i;
            k = (k + i + 1);
            for (int j = 0; j < i - 1; j++)
            {
                cout << l << "*";
                l--;
            }
            cout << l << endl;
        }
        else
        {
            for (int j = 0; j < i - 1; j++)
            {
                cout << k << "*";
                k++;
            }
            cout << k << endl;
        }
    }
}
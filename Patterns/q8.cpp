#include <iostream>
using namespace std;

int main()
{
    int n, a = 1, m;
    cout << "n: ";
    cin >> n;
    int l = (n * n);
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << a++ << "*";
        }
        m = l;
        for (int k = 1; k < i; k++)
        {
            cout << ++m << "*";
        }
        cout << m + 1 << endl;
        l = l - i + 1;
    }
}
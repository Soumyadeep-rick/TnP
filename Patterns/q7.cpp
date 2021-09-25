#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "n: ";
    cin >> n;
    cout << k++ << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << k << "*";
            k++;
        }
        cout << k++ << endl;
    }
    k--;
    for (int i = n - 1; i > 0; i--)
    {
        int l = (k - i);
        for (int j = 0; j < i; j++)
        {
            cout << l << "*";
            l++;
            k--;
        }
        cout << l << endl;
        k--;
    }
    cout << k;
    return 0;
}
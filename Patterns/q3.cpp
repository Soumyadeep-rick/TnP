#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cout << "N: ";
    cin >> n;
    cout << "S: ";
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << s;
        }
        cout << endl;
        s++;
    }
    s--;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << s;
        }
        cout << endl;
        s--;
    }
}
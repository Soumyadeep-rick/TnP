#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << i;
            }
            cout << i + 1 << endl;
        }
        else
        {
            cout << i + 1;
            for (int j = 0; j < n; j++)
            {
                cout << i;
            }
            cout << endl;
        }

        // if (i % 2 != 0)
        // {
        //     printf("%d", i);
        //     printf("%d", i);
        //     printf("%d", i);
        //     printf("%d", i);
        //     printf("%d\n", i + 1);
        // }
        // else
        // {
        //     printf("%d", i + 1);
        //     printf("%*d", n, i);
        //     cout << endl;
        // }
    }
}
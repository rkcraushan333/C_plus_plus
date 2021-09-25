#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        int val = i;
        for (int j = 0; j <= i; j++)
        {
            cout << val + 1;
            val++;
        }
        val -= 1;
        for (int j = 0; j < i; j++)
        {
            cout << val;
            val -= 1;
        }

        cout << endl;
    }

    return 0;
}
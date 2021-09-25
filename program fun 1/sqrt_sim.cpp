#include <iostream>
using namespace std;

int main()
{

    int n, p;
    cin >> n >> p;
    float ans = 0;
    float i = 1.0;

    for (int times = 0; times <= p; times++)
    {
        while ((ans * ans) <= n)
        {
            ans += i;
        }
        ans = ans - i;
        i = i/10;
    }

    cout << ans << endl;

    return 0;
}
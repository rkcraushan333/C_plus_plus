#include <iostream>
using namespace std;

int main()
{

    char ch;
    int x = 0, y = 0;
    ch = cin.get();

    while (ch != '\n')
    {
        if (ch == 'n' || ch == 'N')
        {
            y++;
        }
        if (ch == 's' || ch == 's')
        {
            y--;
        }
        if (ch == 'E' || ch == 'e')
        {
            x++;
        }
        if (ch == 'W' || ch == 'w')
        {
            x--;
        }
        ch = cin.get();
    }
    cout << "coordinates are: (" << x << "," << y << ")" << endl;

    if (x > 0)
    {
        while (x != 0)
        {
            cout << "E";
            x--;
        }
    }
    if (x < 0)
    {
        while (x != 0)
        {
            cout << "w";
            x++;
        }
    }
    if (y > 0)
    {
        while (y != 0)
        {
            cout << "N";
            y--;
        }
    }
    if (y < 0)
    {
        while (y != 0)
        {
            cout << "S";
            y++;
        }
    }

    return 0;
}
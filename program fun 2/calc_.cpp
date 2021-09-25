#include <iostream>
using namespace std;

int main()
{
    char ch = cin.get();
    int digits = 0, alphabets = 0, spaces = 0, others = 0;

    while (ch != '.')
    {
        if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z'))
        {
            alphabets++;
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            spaces++;
        }
        else
        {
            others++;
        }
        ch = cin.get();
    }
    cout << "digits: " << digits << endl;
    cout << "alphabets: " << alphabets << endl;
    cout << "spaces: " << spaces << endl;
    cout << "others: " << others << endl;

    return 0;
}
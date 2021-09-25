#include <iostream>
using namespace std;

int main(){

    char ch;
    // cin>>ch;
    ch = cin.get();   // reads the special character also

    while (ch != '.')
    {
        cout<<ch;
        ch = cin.get();
    }
    
    return 0;
}
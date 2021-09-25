#include <iostream>
using namespace std;

int main(){

    int n;
    int no;
    int x = 0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>no;
        x = x^no;
    }
    cout<<x;
    


    return 0;
}
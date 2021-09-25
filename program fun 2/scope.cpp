#include <iostream>
using namespace std;

int a = 200;
int main(){

    int a = 10;

    for (int a = 0; a <= 5; a++)
    {
        cout<<"Loop Variabe: "<<a<<endl;
    }
    
    cout<<"Local Variable: "<<a<<endl;     // Local Variable
    cout<<"Global Variable: "<<::a;        // Global Variable
    
    return 0;
}
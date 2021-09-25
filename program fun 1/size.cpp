#include <iostream>
using namespace std;

int main(){

    int a=5;
    float b = 5.39;
    bool it_iss_too_hot = true;
    double pi = 3.1415873623839;
    char c ='a';

    cout<<"size of integer is: "<< sizeof(a)<<endl;
    cout<<"size of float is: "<< sizeof(b)<<endl;
    cout<<"size of boolean is: "<< sizeof(it_iss_too_hot)<<endl;
    cout<<"size of double is: "<< sizeof(pi)<<endl;
    cout<<"size of character is: "<< sizeof(c)<<endl;



    return 0;
}
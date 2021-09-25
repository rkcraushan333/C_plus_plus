#include <iostream>
using namespace std;
float tempConvertor(int f){
    float c;
    c = ((f-32)*5)/9;
    return c;
}
int main(){

    int f;
    for (f = 0; f <= 300; f+=20)
    {
        float result = tempConvertor(f);
        cout<<f<<"  "<<result<<endl;
    }
    
    return 0;
}
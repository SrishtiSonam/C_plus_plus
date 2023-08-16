#include <iostream>
using namespace std;

int main(){

    int i = 5;      // Variable type name = value   
    cout<<i<<"\n";      // int - 32bit (8*4)

    unsigned int j = 7;        // Only positive numbers        // For -7 = 4294967289
    cout<<j<<"\n";

    // char i = 'a';
    // Redefining will cause error

    char x = 'a';
    // char y = 'ab';       //Double character is not possible for char 
    cout<<"Value of x is "<<x<<" and Size of "<<x<<" = "<<sizeof(x)<<endl;

    bool bl1 = true; 
    bool bl2 = false;
    cout<<"Value of true: "<<bl1<<"\t"<<"Value of false: "<<bl2<<endl;

    float f = 1.2;
    double d = 4.004;
    cout <<"Value of \'f\' is "<<f<<" and its size is "<<sizeof(f)<<"\nValue of \'d\' is "<<d<<" and its size is "<<sizeof(d)<<endl;

    // Memory is stored with the help of variable   -   Memory size depends on the basis on compiler

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int x = 'a';
    cout<<x<<endl;

    char ch = 97;
    cout<<ch<<endl;

    char a = 123456;        //  Force Type Casting
    cout<<a<<endl;
    // overflow in conversion from 'int' to 'char' changes value from '123456' to '64'

    // First bit shows that the number is negative or positive.
    // if first bit is      0 - positive     or      1 - negative.

    return 0;
}
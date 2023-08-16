#include <iostream>
using namespace std;

int main(){

    // // //  cin doesn't read " ", "\t", "\n" ...    -->   for them cin.get() is there, which returns character.

// // Nomal condition check
    // int quantity;
    // cout<<"Enter the number of pens available: ";
    // cin>>quantity;
    // if (quantity>10){
    //     cout<<"Buy 10 pens."<<endl;
    // }else{
    //     cout<<"Buy all the pens."<<endl;
    // }

// // Even Or Odd
    // int num;
    // cout<<"Enter the number to check whether the number is even or odd: ";
    // cin>>num;
    // if(num%2==0){
    //     cout<<"The number is even."<<endl;
    // }else{
    //     cout<<"The number is odd."<<endl;
    // }

// // Positive Or Negative
    // int num;
    // cout<<"Enter the number to check whether the number is positive or negative: ";
    // cin>>num;
    // if(num>0){
    //     cout<<"The number is positive."<<endl;
    // }else if{
    //     cout<<"The number is negative."<<endl;
    // }else{
    //     cout<<"The number is zero."<<endl;
    // }

// // Greater Number
//     float a,b;
//     cout<<"Enter the value of a and b to compare there values:";
//     cin>>a>>b;
//     if(a>b){
//         cout<<a<<" is greater than "<<b<<endl;
//     }else if(b>a){
//         cout<<b<<" is greater than "<<a<<endl;
//     }else{
//         cout<<"Both are equal."<<endl;
//     }

// // cin.get()
    // int a;
    // a = cin.get();
    // cout<<"Value of a is "<<a;
    // // Value of a is 10 for enter.
    // // Value of a is 9 for tab.
    // // Value of a is 32 for space.
    // // Value of a is 49 for 1.
    // // Value of a is 39 for 'any_character'.
    // // Value of a is 97 for a.
    // // Gives ASCII value.

// // Problem            --------         ****************************
    // int a = 2;
    // int b = a+1;
    // if ((a=3)==b){           // ----------------------  //
    //     cout<<"hi"<<endl;
    // }else{
    //     cout<<"hello"<<endl;
    // }

// // Lowercase, Uppercase, Numeric
    char ch;
    cout<<"Enter a character: ";
    ch = cin.get();
    if ( (ch>96) && (ch<123) ){
        cout << "It is a lower case."<<endl;
    }else if ( (ch>64) && (ch<91) ){
        cout << "It is a upper case."<<endl;
    }else if ( (ch>47) && (ch<58) ){
        cout << "It is a numeric value."<<endl;
    }

    return 0;
}


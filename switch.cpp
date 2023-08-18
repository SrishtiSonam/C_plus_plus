#include<iostream>
using namespace std;

int main(){

    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;

    // switch(num){

    //     case 1: cout<<"First"<<endl; break;

    //     case 2: cout<<"Second"<<endl; break;                       // continue; cant be used in switch case 
    //                                                         // as it needs loop to be executed.
    //     case 3: cout<<"Third"<<endl; break;

    //     default : exit(6);
    //     //         Exit status 0: Generally indicates successful execution.
    //     //         Exit status 1: Often used to indicate a general error.
    //     //         Exit status 2: Could represent misuse of command-line parameters.

    // }

    // char ch;
    // cout<<"Enter a character: ";
    // cin>>ch;

    // switch(ch){

    //     case 'A': cout<<"Apple"<<endl; break;
    //     case 'B': cout<<"Banana"<<endl; break;
    //     default: cout<<"homework"<<endl;
    // }


    /*                  --------------  Calculator  -------------                       */
    float num1,num2;
    char op;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"'+' for addition, '-' for substraction, '*' for multiplication, '/' for division, '%' for remainders.";
    cout<<"Enter the operator for which operation need to be done on the above numbers: "<<endl;
    cin>>op;
    cout<<"The result of "<<num1<<op<<num2<<" is ";

    switch(op){

        case '+': cout<<num1+num2<<endl; break;             // Block may or may not be used. { }
        case '-': cout<<num1-num2<<endl; break;
        case '*': cout<<num1*num2<<endl; break;
        case '/': cout<<num1/num2<<endl; break;
        case '%': cout<<num1/num2<<endl; 

    }

    return 0;
}
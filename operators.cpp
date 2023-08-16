#include <iostream>
using namespace std;

int main(){
    float a,b,af,bf;
    int ai,bi,i;

    // i = 6;      // Assignment Operator

    // cout<<"To perform arithematic operations we need two variables a and b."<<endl;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // cout<<"Addition : "<<a+b<<endl;
    // cout<<"Subtraction : "<<a-b<<endl;
    // cout<<"Multiplication : "<<a*b<<endl;
    // cout<<endl;

    // cout<<"To perform division operations lets take variables with different datatypes."<<endl;
    // cout<<"Enter the integer value for a: ";
    // cin>>ai;
    // cout<<"Enter the integer value for b: ";
    // cin>>bi;
    // cout<<"Enter the float value for a: ";
    // cin>>af;
    // cout<<"Enter the float value for b: ";
    // cin>>bf;
    // cout<<"Integer/Integer: "<<ai/bi<<endl;
    // cout<<"Integer/Float: "<<ai/bf<<endl;
    // cout<<"Float/Integer: "<<af/bi<<endl;
    // cout<<"Float/Float: "<<af/bf<<endl;
    // cout<<"\n";
    // // If we store the value of float/float in an integer variable then the resultant will also be an integer.

    // cout<<"To perform relational operations we need two variables a and b."<<endl;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // cout<<" == "<<" a==b " << (a==b) <<endl;     // Brackets are must ..
    // cout<<" <= "<<" a<=b " << (a<=b) <<endl;
    // cout<<" >= "<<" a>=b " << (a>=b) <<endl;
    // cout<<" != "<<" a!=b " << (a!=b) <<endl;

    cout<<"To perform logical operations we need two variables a and b."<<endl;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<" && "<<" ( (a<100) && (b<100) ) \t" << ((a<100)&&(b<100)) <<endl;     // Brackets are must ..
    cout<<" || "<<" ( (a<100) || (b<100) ) \t" << ((a<100)||(b<100)) <<endl;
    cout<<" ! "<<" (!( (a<100) && (b<100) )) \t" << !((a<100)&&(b<100)) <<endl;
    cout<<"! for a value " << !(a) <<endl;
    cout<<"! for 0 value " << !(0) <<endl;


    return 0;
}
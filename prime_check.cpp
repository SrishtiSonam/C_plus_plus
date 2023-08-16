#include <iostream>
using namespace std;

int main(){

    int i=2,n,flag=0;
    cout<<"Enter the number to check whether the number is prime or not: ";
    cin>>n;
    while(i<n){
        if ((n%i)==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag){
        cout<<"The number is composite."<<endl;
    }else{
        cout<<"The number is prime."<<endl;
    }

    return 0;
}
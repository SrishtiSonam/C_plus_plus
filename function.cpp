#include<iostream>
using namespace std;

int Facto(int num) {
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

float Power(float base,int pow){
    int i,res=1;
    for(i=0;i<pow;i++){
        res*=base;
    }
    return res;
}

bool isEven(int num){
    if (num&1) return false;
    else return true;
}

float nCr(int n, int r){            // Variables are only declared for that perticular block only.
    if(r>n){
        cout<<"Not Possible"<<endl;
        return 0;
    }
    int i,max,min;
    float result,upper=1,lower=1;
    if (n-r>r){
        max=n-r;
        min=r;
    }else{
        max=r;
        min=n-r;
    }
    for(i=n;i>max;i--){
        upper*=i;
    }
    lower = Facto(min);
    result = upper/lower;
    return result;
}

float nPr(int n,int r){
    int i;
    float result,upper=1,lower=1;
    upper = Facto(n);
    lower = Facto(r);
    result = upper/lower;
    // cout<<"result"<<result;
    return result;
}

bool prime_check(int num){
    int i;
    if (num==0) return false;
    else if (num==1) return true;
    else{
        for (i=2;i<num;i++){
            if ((num%i)==0) return false;
        }
        return true;
    }
}


int main(){

    // // /*              ------------        Factorial       ------------                */
    // // int fact=1,num,i;

    // // cout<<"Enter the number to calculate it's factorial: ";
    // // cin>>num;
    // // for(i=1;i<=num;i++){
    // //     fact*=i;
    // // }
    // // cout<<fact;

    // int num;
    // cout<<"\nEnter the number to calculate it's factorial: ";
    // cin>>num;
    // cout<<Facto(num)<<endl;


    // // /*              ------------        Power       ------------                */
    // // int pow,i;
    // // float base,result=1;

    // // cout<<"To calculate the power"<<endl;
    // // cout<<"Enter the base : ";
    // // cin>>base;
    // // cout<<"Enter the exponent: ";
    // // cin>>pow;
    // // for(i=1;i<=pow;i++){
    // //     result*=base;
    // // }
    // // cout<<result;

    // int pow; float base;
    // cout<<"\nTo calculate the power"<<endl;
    // cout<<"Enter the base : ";
    // cin>>base;
    // cout<<"Enter the exponent: ";
    // cin>>pow;
    // cout<<Power(base,pow)<<endl;


    // int number;
    // cout<<"\nEnter a number to check that whether it is even or not: ";
    // cin>>number;
    // cout<<isEven(number)<<endl;


    // int n,r;
    // cout<<"Enter the value for n and r respectively for nCr calculations: ";
    // cin>>n>>r;
    // cout<<nCr(n,r)<<endl;


    // int n,r;
    // cout<<"Enter the value for n and r respectively for nPr calculations: ";
    // cin>>n>>r;
    // cout<<nPr(n,r)<<endl;


    int number;
    cout<<"\nEnter a number to check that whether it is prime or not: ";
    cin>>number;
    cout<<prime_check(number)<<endl;

    
    return 0;
}
#include <iostream>
using namespace std;

int main(){

    // // WHILE loop
    // int i=0;
    // while(i<10){
    //     cout<<i<<"\t";
    //     i++;
    // }
    // cout<<endl;

    // // FOR loop
    // int j;
    // for(j=1;j<=10;j++){
    //     cout<<j<<"\t";
    // }
    // cout<<endl;

    // // Sum of 'n' digits. 
    // int sum=0,n,k=1;
    // cout<<"Enter the number terms you want in your series: ";
    // cin>>n;
    // while(k<=n){
    //     sum = sum + k;
    //     cout<<k<<" - "<<sum<<"\n";
    //     k++;
    // }
    // cout<<"Sum of first "<<n<<" numbers is "<<sum;

    // Sum of all even numbers.
    int i,n,sum=0;
    cout<<"Enter the number terms you want in your series: ";
    cin>>n;
    for (i=2;i<=(2*n);i+=2){
        sum+=i;
        // cout<<i<<" - "<<sum<<"\n";
    }
    cout<<"Sum of first "<<n<<" even numbers is "<<sum;

    return 0;
}
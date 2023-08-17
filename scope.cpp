#include<iostream>
using namespace std;

int main(){

    int a = 3;
    cout<<a<<endl;

    if (true){

        int a = 5;      // Difference comes if we 'int' is written or not... 
        cout<<a<<endl;

        int b = 7;
        cout<<b<<endl;
    }

    cout<<a<<endl;
    // cout<<b<<endl;       will give error as not being able to identify what is 'b'?

    for(int a = 0; a < 9; a++){         // This is not redefination...
        cout<<"Hi ";
    }
    // for(; b<10; b++){            // This will give error and not access the above value of b.
    //     cout<<"Hello ";
    // }

    
    /*
    {
        b;          ---         Not allowed;
        b;
    }
    {
        a;
        {
            a;      -----       If this a will not be there above value will be used not vise-versa.
        }
    }
    */


    return 0;
}
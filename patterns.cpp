#include<iostream>
using namespace std;

int main(){

    // /*      Pattern 1  -  hash box  -- >
    //     # # #
    //     # # #
    //     # # # 
    // */
    // int i,j,n;
    // cout<<"Enter the size of hash box: ";
    // cin>>n;
    // for (i=0;i<n;i++){
    //     for (j=0;j<n;j++){
    //         cout<<"# ";
    //     }
    //     cout<<endl;
    // }

    // /*      Pattern 2 - Numeric Box 
    //     1 1 1 
    //     2 2 2 
    //     3 3 3
    // */
    // int i,j,n;
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n){
    //         cout<<(i+1)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 3 - Numeric Triangle 
    //     1 1 1 
    //     2 2  
    //     3 
    // */
    // int i,j,n;
    // cout<<"Enter the size of Numeric triangle: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n-i){
    //         cout<<(i+1)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 4 - Numeric Box 
    //     1 2 3 
    //     1 2 3 
    //     1 2 3
    // */
    // int i,j,n;
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n){
    //         cout<<(j+1)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 5 - Counting Numeric Box 
    //     1 2 3 
    //     4 5 6 
    //     7 8 9
    // */
    // int i,j,n;
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n){
    //         cout<<j+(i*n)+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 6 - Numeric Box Triangle 
    //     1
    //     2 2
    //     3 3 3
    // */
    // int i,j,n;
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<=i){
    //         cout<<i+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 7 - Counting Numeric Box 
    //     1 2 3 
    //     4 5 6 
    //     7 8 9
    // */
    // int i,j,n,count;
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=0;
    // count=1;
    // while(i<n){
    //     j=0;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 8 - Numeric Box Triangle 
    //     1
    //     2 1
    //     3 2 1
    // */
    // int i,j,n;
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=1;
    // while(i<=n){
    //     j=1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 9 - Alphabetical Box 
    //     A A A 
    //     B B B 
    //     C C C
    // */
    // int i,j,n;
    // char ch = 'A';
    // cout<<"Enter the size of Numeric box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n){
    //         cout<<char(ch)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //     ch++;
    // }

    // /*      Pattern 10 - Alphabetical Box
    //     A B C
    //     A B C
    //     A B C
    // */
    // int i,j,n;
    // char ch;
    // cout<<"Enter the size of box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     ch = 'A';
    //     j=0;
    //     while(j<n){
    //         cout<<char(ch+j)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 11 - Alphabetical Box
    //     A B C
    //     D E F
    //     G H I
    // */
    // int i,j,n;
    // char ch;
    // cout<<"Enter the size of box: ";
    // cin>>n;
    // i=0;
    // ch = 'A';
    // while(i<n){
    //     j=0;
    //     while(j<n){
    //         cout<<char(ch)<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 12 - Alphabetical Box
    //     A B C
    //     B C D
    //     C D E
    // */
    // int i,j,n;
    // char ch;
    // cout<<"Enter the size of box: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     ch = 'A'+i;
    //     j=0;
    //     while(j<n){
    //         cout<<char(ch)<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 13 - Alphabetical Triangle
    //     D C B A
    //     C B A
    //     B A
    //     A
    // */
    // int i,j,n;
    // char ch = 'A';
    // cout<<"Enter the size of alphabetical triangle: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n-i){
    //         cout<<char(n-i-j+ch-1)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 14 - Alphabetical Triangle
    //     D  
    //     D C
    //     D C B
    //     D C B A
    // */
    // int i,j,n;
    // char ch;
    // cout<<"Enter the size of alphabetical triangle: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     ch = 'A' + n - 1;
    //     while(j<=i){
    //         cout<<char(ch-j)<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 15 - Right angled triangle
    //       *
    //      **
    //     ***      
    // */
    // int i,j,n;
    // cout<<"Enter the size of n: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n-i-1){
    //         cout<<"  ";
    //         j++;
    //     }
    //     j=0;
    //     while(j<=i){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 16 - Right angled triangle
    //     ***
    //      **
    //       *      
    // */
    // int i,j,n;
    // cout<<"Enter the size of n: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<i){
    //         cout<<"  ";
    //         j++;
    //     }
    //     j=0;
    //     while(j<n-i){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /*      Pattern 17 - Isometric triangle
    //       *
    //      ***
    //     *****
         
    // */
    // int i,j,n;
    // cout<<"Enter the size of n: ";
    // cin>>n;
    // i=0;
    // while(i<n){
    //     j=0;
    //     while(j<n-i){
    //         cout<<"  ";
    //         j++;
    //     }
    //     j=0;
    //     while(j<((2*i)+1)){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    /*      Pattern 18 - Isometric triangle
        123321
        12**21
        1****1
         
    */
    int i,j,n;
    cout<<"Enter the size of n: ";
    cin>>n;
    i=0;
    while(i<n){
        j=0;
        while(j<n-i){
         
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
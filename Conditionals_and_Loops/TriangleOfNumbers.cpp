/*
Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 4
. . . 1
. . 2 3 2
. 3 4 5 4 3
4 5 6 7 6 5 4


The dots represent spaces.




Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
          232
         34543
        4567654
       567898765
Sample Input 2:
4
Sample Output 2:
           1
          232
         34543
        4567654
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=i; k<= (2*i)-1; k++){
            cout<<k;
        }
        for(int l=((2*i))-2; l>=i; l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
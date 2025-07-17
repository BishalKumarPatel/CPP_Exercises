/*
Problem statement
Print the following pattern for the given number of rows.

Note: N is always odd.


Pattern for N = 5
. . *
. * * *
* * * * *
. * * *
. . *


The dots represent spaces.




Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i=i+2){
      for(int j=1; j<=n-i; j=j+2){
        cout<<" ";
      }
      for(int k=1; k<=2*i-1; k=k+2){
        cout<<"*";
      }
      cout<<endl;
    }

    for(int i=1; i<=n/2; i++){
      for(int j=1; j<=i; j++){
        cout<<" ";
      }
      for(int k=n-2*i; k>=1; k--){
        cout<<"*";
      }
      cout<<endl;
    }
    return 0;
}
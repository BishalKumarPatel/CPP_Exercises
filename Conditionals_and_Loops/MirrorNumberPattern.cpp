/*
Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4




The dots represent spaces.



Constraints
0 <= N <= 50
Sample Input 1:
3
Sample Output 1:
      1 
    12
  123
Sample Input 2:
4
Sample Output 2:
      1 
    12
  123
1234
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
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
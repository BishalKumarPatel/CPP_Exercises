/*
Problem statement
Print the following pattern

Pattern for N = 4

      1
    2 3
  3 4 5
4 5 6 7

The dots represent spaces.




Sample Input :
5

Sample Output :
. . . . 1
. . . 2 3
. . 3 4 5
. 4 5 6 7
5 6 7 8 9

The dots represent spaces.
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
        int count = i;
        for(int k = 1; k <= i; k++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}
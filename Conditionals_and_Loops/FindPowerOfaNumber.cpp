/*
Problem statement
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

Note : For this question, you can assume that 0 raised to the power of 0 is 1


Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, n;
    cin>>x>>n;
    int ans = pow(x,n);
    cout<<ans;
}
/* Problem statement
Write a program that takes three numbers a,b, and c as input and prints the largest number amongst them.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4 6 1
Sample Output 1 :
6
Explanation of Sample Input 1:
6 is the highest of amongst all.
Sample Input 2 :
-32 -23 -76
Sample Output 2 :
-23
Explanation of Sample Input 2:
-23 is the highest of amongst all.
Sample Input 3 :
-4 0 5
Sample Output 3 :
5
Explanation of Sample Input 2:
5 is the highest of amongst all. */


#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    return 0;
}

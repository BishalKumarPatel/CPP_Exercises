/*
Problem statement
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"


Example :
Input: 6

Output: 8

Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6


Sample Output 1:
8


Explanation of sample input 1 :
The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.


Expected time complexity :
The expected time complexity is O(n).


Constraints:
1 <= 'n' <= 10000     
Where ‘n’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second

*/

#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int a=0, b=1, next;
    for(int i= 2;  i<=n; i++){
        next = a+b;
        a = b;
        b = next;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}


//Recursive method
/*
#include<iostream>
using namespace std;
int solve(int n){
    if(n==0 || n==1)
    return n;
    return solve(n-1) + solve(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;

}
    */
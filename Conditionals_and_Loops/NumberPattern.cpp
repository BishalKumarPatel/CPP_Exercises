
/*Problem statement
Print the following pattern

Pattern for N = 4

1
23
345
4567
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
3
Sample Output 1 :
1
23
345*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        int count = i;
        for(int j = 1; j <= i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

 void Cal_Total_salary(double basic_salary, double allow){
    double hra = 0.2*basic_salary;
    double da = 0.5*basic_salary;
    double pf = 0.11*basic_salary;

   double total_salary = basic_salary + hra + da + allow - pf;
   int Final_salary = round(total_salary);
    cout<<Final_salary<<endl;
}

int main(){
    double basic_salary, allow;
    char grade;
    cin>>basic_salary>>grade;
    if(grade == 'A'){
        allow = 1700;
    }
    else if(grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    
    Cal_Total_salary(basic_salary, allow);
    return 0;  
}
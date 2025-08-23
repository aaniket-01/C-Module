#include<iostream>
using namespace std;
int main()
{
    int basic_salary;
    float tax;

    cout<<"Enter annual basic salary of an Employee: "<<endl;
    cin>>basic_salary;

    if(basic_salary < 150000)
    {
        tax = 0;
        cout<<"Salary is less than 1,50,000 so tax will be 0"<<endl;
    }
    else if (basic_salary >= 150000 && basic_salary <= 300000)
    {
        tax = (basic_salary * 20) / 100;
        cout<<"Salary is between 1,50,000 and 3,00,000 so tax will be 20%"<<endl;
        cout<<"So the tax: "<<tax<<endl;
    }
    else
    {
        tax = (basic_salary * 30) / 100;
        cout<<"Salary is greater than 3,00,000 so tax will be 30%"<<endl;
        cout<<"So the tax: "<<tax<<endl;
    }
    return 0;
}
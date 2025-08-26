#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        string name;
        double basic_salary;
        double HRA;
        double medical = 1000;
        double PF;
        double PT;
        double net_salary;
        double gross_salary;

    public: Employee(int id, string name, double basic_salary)
    {
        this->id = id;                  //why this keyword, what it does?
        this->name = name,
        this->basic_salary = basic_salary;
        HRA = (basic_salary * 50) / 100;
        PF = (basic_salary * 12) / 100 ;
        PT = 200;
    }

    void employeeDetails()
    {
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Basic Salary: "<<basic_salary<<endl;
    }

    void calculateSalary()
    {
        gross_salary = basic_salary + HRA + medical;
        net_salary = gross_salary - (PT + PF);
        
        cout<<"Gross Salary: "<<gross_salary<<endl;
        cout<<"Net Salary: "<<net_salary<<endl;
    }
};
int main()
{
    Employee emp1(1, "Mayank", 100000);
    Employee emp2(2, "Aniket", 100000);

    cout<<"-----------------------ABC Private Limited--------------------------"<<endl;
    emp1.employeeDetails();
    emp1.calculateSalary();
    cout<<"-----------------------ABC Private Limited--------------------------"<<endl;
    emp2.employeeDetails();
    emp2.calculateSalary();
    cout<<"-----------------------ABC Private Limited--------------------------"<<endl;
    

    return 0;
}
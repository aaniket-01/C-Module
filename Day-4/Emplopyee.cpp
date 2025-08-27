#include<iostream>
using namespace std; 

class Date
{
    private: 
        int day, month, year;

    public: Date()
    {
        day = 27;
        month = 8;
        year = 2025;
    }

    public: Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    public: void accept()
    {
        cout<<"Enter the day, month and year: "<<endl;
        cin>>day>>month>>year;
    }

    public: void display()
    {
        cout<<"Today Date: "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};

class Employee
{
    private: 
        int id;
        string name;
        Date dob;   //concept of "Composition"

    public:
        Employee()
        {
            id = 1;
            name = "Mr.Unknown";
            dob;
        }

        Employee(int i, string n, Date d)
        {
            id = i;
            name = n;
            dob = d;
        }

        void accept()
        {
            cout<<"Enter Employee Id: "<<endl;
            cin>>id;
            cout<<"Enter Employee Name: "<<endl;
            cin>>name;
            cout<<"Enter Date of Birth: "<<endl;
            dob.accept();
        }

        void display()
        {
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Date of Birth: ";
            dob.display();
        }
};



int main()
{
    Employee emp1;

    Date d(28,8,2025);
    Employee emp2(111, "THOR", d);

    cout<<"Employee created using default constructor: "<<endl;
    emp1.display();

    cout<<"Employee created using paramterized constructor: "<<endl;
    emp2.display();

    cout<<"Enter details of another Employee: "<<endl;
    Employee emp3;
    emp3.accept();
    emp3.display();
    return 0;
}
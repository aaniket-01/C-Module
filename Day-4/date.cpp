#include<iostream>
using namespace std;

class Date
{
    private : 
        int day, month, year;

    public : Date()
    {
        day = 25;
        month = 8;
        year = 2025;
    }

    public : Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void displayDate()
    {
        cout<<"Today is: "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};

int main()
{
    Date d1;
    d1.displayDate();

    Date d2(26, 8,2025);
    d2.displayDate();
    
    return 0;
}
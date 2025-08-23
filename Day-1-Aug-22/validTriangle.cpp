#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout<<"Enter the three sides of the triangle: "<<endl;
    cin>>a>>b>>c;   

    if (a+b > c && b+c > a && a+c > b)
    {
        cout<<"Valid Triangle"<<endl;
        cout<<"The triangle is valid if sum of two sides of the triangle is greater than the third"<<endl;
    }
    else
        cout<<"Triangle is not valid"<<endl;
    return 0;
}
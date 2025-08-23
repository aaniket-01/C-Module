#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;

    cout<<"Enter the values for a and b: "<<endl;
    cin>>a>>b;

    cout<<"The values before swap a: "<<a << " and b: " <<b<<endl;

    // temp = a;
    // a = b;
    // b = temp;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<<"The values after swap a: "<<a << " and b: "<<b<<endl;
    return 0 ;

}
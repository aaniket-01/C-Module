#include<iostream>
using namespace std;
int main()
{
    int num, fact = 1;

    cout<<"Enter the number: "<<endl;
    cin>>num;

    if(num == 0)
        cout<<"Factorial of 0 is 1"<<endl;
    
    for(int i=1; i<=num;i++)
    {
        fact = fact*i;
    }

    cout<<"Factorial of a given number: "<<fact<<endl;

    return 0;
}
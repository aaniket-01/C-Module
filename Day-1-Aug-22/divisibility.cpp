#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter any number: "<<endl;
    cin>>num;

    if((num % 5) == 0 && (num % 7) == 0)
        cout<<num<<" is divisible by 5 and 7"<<endl;
    else
        cout<<num<<" is not divisible by 5 and 7<<endl";
    
    return 0;
}
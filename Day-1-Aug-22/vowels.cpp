#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter any character: "<<endl;
    cin>>ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout<<ch<<" is Vowel"<<endl;
    else
        cout<<ch<<" is consonant"<<endl;

    return 0;
}
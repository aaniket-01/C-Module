#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;

    for(int i=1; i<=num; i++)
        fact = fact * i;
    return fact;
}

int recursiveFact(int n)
{
    int factorial = n * recursiveFact(n - 1);
    return factorial;
}

int main()
{
    int n;

    cout<<"Enter number: "<<endl;
    cin>>n;

    // int result = factorial(n);
    // cout<<"Factorial of a given number: "<<result<<endl;

    int recursiveApproach = recursiveFact(n);
    cout<<"Factorial of a number using recursive approach: "<<recursiveApproach<<endl;
    return 0;
}
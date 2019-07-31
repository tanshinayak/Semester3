//Practical 2 - exponentiation (recursion)

#include<iostream>
using namespace std;

int rec(int b, int r)
{
    if(r==0)
        return 1;
    else
        return b*rec(b,r-1);
}

int main()
{
    int base,expo;
    cout<<"\nEnter the base : ";
    cin>>base;
    cout<<"\nEnter the exponent : ";
    cin>>expo;
    cout<<"\n"<<base<<" raised to the power "<<expo<<" is "<<rec(base,expo);
    return 0;
}
//Practical 10 - stack addition

#include<iostream>
#include "ds5.cpp"
using namespace std;

int main()
{
    string num1,num2,result;
    cout<<"\nEnter first number : ";
    cin>>num1;
    // getline(cin,num1);
    cout<<"\nEnter second number : ";
    cin>>num2;
    // getline(cin,num2);
    Stack<char> s1(10),s2(10),s3(11);
    for(int i=0;num1[i]!='\0';i++)
    {
        s1.push(num1[i]);
    }
    for(int i=0;num2[i]!='\0';i++)
    {
        s2.push(num2[i]);
    }
    int carry=0;
    while(!s1.isempty() && !s2.isempty())
    {
        int x,y;
        if(s1.isempty())
            x = 0;
        else
            x = s1.pop()-48;
        if(s2.isempty())
            y = 0;
        else
            y = s2.pop()-48;
        int z = x+y+carry;
        s3.push(z%10+48);
        if(z>10){
            carry=1;
        }
        else
        {
            carry=0;
        }
    }
    if(carry==1)
    {
        s3.push(49);
    }
    while(!s3.isempty())
    {
        char a = s3.pop();
        result+=a;
    }
    cout<<"\nSum = "<<result;
}
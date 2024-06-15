#include<iostream>
using namespace std;
//swaping two numbers without using any third variable or function
int main()
{
float a,b;
cout<<"Enter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swaping first number : "<<a<<" ,second number : "<<b<<endl;
}

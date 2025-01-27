#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    c=a+b;
    cout<<endl<<c<<endl;
    cout<<"Addition of Two Number is "<<c<<endl;
    cout<<a<<"+"<<b<<"="<<c<<endl<<"\n\n";
    c=a-b;
    cout<<endl<<c<<endl;
    cout<<"Substraction of Two Number is "<<c<<endl;
    cout<<a<<"-"<<b<<"="<<c<<"\n\n";
    c=a*b;
    cout<<endl<<c<<endl;
    cout<<"Multiplication of Two Number is "<<c<<endl;
    cout<<a<<"*"<<b<<"="<<c<<"\n\n";
    c=a/b;
    cout<<endl<<c<<endl;
    cout<<"Division of Two Number is "<<c<<endl;
    cout<<a<<"/"<<b<<"="<<c<<"\n\n";
}
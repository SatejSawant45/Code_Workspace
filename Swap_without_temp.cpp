#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=-(b-a);
    cout<<"The swaped numbers are"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;


}
//program to show diff between pass  by value and pass by refrance.
//Preogram to swap two numbers

#include<bits/stdc++.h>
using namespace std;
/*
void swapp(int a,int b)
{
    
    int temp=a;
    a=b;
    b=temp;
 
}*/
void swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
int main()
{
    int n,m;
    cout<<"Enter two numbers"<<endl;
    cin>>n>>m;
    swap(n,m);
    cout<<"Swaped numbers are"<<endl;
    cout<< n <<" "<<m<<endl;
}
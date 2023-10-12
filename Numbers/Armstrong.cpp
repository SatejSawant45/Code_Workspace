//C++ program to check whether the entered number is an armstrong number or not.
//valid for numbers having 4 or more digits.
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int num,rem,sum,cnt,r,n,s,no;
    cout<<"Enter a number . "<<endl;
    cin>>num;

    rem=0;sum=0;cnt=0;
    n=num;s=0;r=0;no=num;
    while(num>0)
    {
        rem=num%10;
        cnt=cnt+1;
        num=num/10;
    }
    while (n>0)
    {
        r=n%10;
        s=s+pow(r,cnt);
        n=n/10;

    }
    if(s==no)
    {
        cout<<"The entered number is an armstrong number"<<endl;
    }
    else
    {
        cout<<"The entered number is not an armstrong number"<<endl;
    }
    return 0;
}
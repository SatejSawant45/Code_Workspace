#include<iostream>
#include<cstdio>
//#include<bits/sdtc++.h>
using namespace std ;

int main()
{
    int num,i,sum,n;
    cout<<"Enter a number"<<endl;
    cin>>num;
    i=1;sum=0;n=num;

    while(i<num)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
        i=i+1;
    }
    if(n==sum)
    {
        cout<<"The entered number is perfect number "<<endl;
    }
    else
    {
        cout<<"The entered number is not a perfect number"<<endl;

    }
    return 0;
}
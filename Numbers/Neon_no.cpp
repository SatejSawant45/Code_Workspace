#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num,rem,sum,sq,n;
    cout<<"Enter a number"<<endl;
    cin>>num;
    rem=0;sum=0;n=0;
    n= num*num;
    
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(num==sum)
    {
        cout<<"The entered number is a Neon number"<<endl;

    }
    else{
        cout<<"The entered number is not a neon number"<<endl;

    }
    return 0;
}
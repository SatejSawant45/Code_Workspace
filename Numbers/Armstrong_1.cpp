
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,num,sum,rem;
    cout<<"Enter a number . "<<endl;
    cin>>num;
    n=num;
    sum=0;rem=0;

    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(n==sum)
    {
        cout<<"Armstrong number"<<endl;

    }
    else
    {
        cout<<"Not an Armstrong number"<<endl;
    }
    return 0;
}
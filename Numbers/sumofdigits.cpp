#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num,sum,rem;
    cout<<"Enter a number.  "<<endl;
    cin>>num;
    rem=0;sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    cout<<"\n Sum of the digits of the given number is "<<sum;
    return 0;
}
    
    


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,rem,lcm;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    lcm=0;rem=0;
    if(a>b)
    {
    while(true)
    {
        lcm=a;
        rem=a%b;
        if(rem==0)
        {
            break;
        }
        a=2*a;
    }
    cout<<"LCM :- " <<lcm;
    }
    else
    {
        while(true)
        {
            lcm=b;
            rem=b%a;
            if(rem==0)
            {
                break;
            }
            b=2*b;
        }
        cout<<"LCM :- "<<lcm;
    }
}   
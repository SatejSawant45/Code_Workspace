#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem=0,sum=0,cnt=0;
    cin>>n;
    while(n>9)
    {
        sum=0;rem=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
     n=sum;
    }

    cout<<sum;
    
}
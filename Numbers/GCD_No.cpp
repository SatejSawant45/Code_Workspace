#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int num1,num2,i,gcd;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;

    i=1;gcd=0;
    while(i<=num1 && i<=num2)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
        i=i+1;
    }
    cout<<"GCD :- "<<gcd;
}
*/
int main()
{
    int r,a,b,hcf;
    hcf=0;r=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;int i=1;
    while(true)
    {
        hcf=b;
        r=(a%b);
        a=b;
        b=r;
        if(r==0)
        {
            break;
        }
    }
    cout<<"HCF :- "<<hcf;
}
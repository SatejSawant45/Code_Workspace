#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,num,sum,rem,i,fact;
    cout<<"Enter a number"<<endl;
    cin>>num;
    sum=0;rem=0;
    n=num;
       

    while(num>0)
    {
        rem=num%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        
        sum=sum+fact;
        num=num/10;
    }
    cout<<sum <<endl;
    
    if(n==sum)
    {
        cout<<"The entered number is Special number"<<endl;
    }
    else
    {
        cout<<"The entered number is not a special number"<<endl;
    }
    return 0;
}
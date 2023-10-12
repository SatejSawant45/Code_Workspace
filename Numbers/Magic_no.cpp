//A magic number is a number whoese sum contineous sum of digit is 1.
// ex:- 199=> 1+9+9=19 => 1+9=10 => 1+0=1 (Therefore , 199 is a magic number)
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int  rem,sum,num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    sum=0;rem=0;
   
   
    while(num>0||sum>9)
    {
        if(num==0)
        {
            num=sum;
            sum=0;
        }
        
        sum=sum+(num%10);
        num=num/10;
    }
   

    
    if(sum==1)
    {
        cout<<"The enterd number is a magic number"<<endl;

    }
    else
    {
        cout<<"The entered number is not a magic number"<<endl;
    }
    return 0;
}
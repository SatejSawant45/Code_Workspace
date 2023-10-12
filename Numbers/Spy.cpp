//C++ program to check weather the entered number is a spy number or not
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num,rem,sum,prod;
    cout<<"Enter a number"<<endl;
    cin>>num;


    rem=0;sum=0;prod=1;

    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        prod=prod*rem;
        num=num/10;
    }
    if(sum==prod)
    {
        cout<<"The given number is a spy number"<<endl;
    }
    else
    {
        cout<<"The entered number is not a spy number"<<endl;

    }
  return 0;

}

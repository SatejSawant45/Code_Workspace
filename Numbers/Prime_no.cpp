#include<iostream>
#include<cstdio>

using namespace std;

int  main()
{
    int i,num,cnt;
    cnt=0;i=1;
    cout<<"Enter a number ."<<endl;
    cin>>num;
    while(i<=num)
    {
        if(num%i==0)
        {
            cnt=cnt+1;
            
        }
        i=i+1;
    }
    if(cnt==2)
    {
        cout<<"The entered number is a prime number"<<endl;
    }
    else
    {
        cout<<"The entered number is a composite number"<<endl;
    }
    return 0;
}
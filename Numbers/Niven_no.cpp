#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int sum,num,rem,no;
    cout<<"Enter a number"<<endl;
    cin>>num;
    sum=0;rem=0;no=num;
    while(num>0)
    {
        rem=num%10;sum=sum+rem;num=num/10;
    }
    if(no%sum==0)

    {
      cout<<"Niven number"<<endl;  
    }
    else{
        cout<<"Not a niven number"<<endl;
    }
    return 0;
}
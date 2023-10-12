#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num,i,f;
    cout<<"Enter a number"<<endl;
    cin>>num;

    for(i=1;i<=num;i++)
    {
        if(i*(i+1)==num)
        {
           f=1;
           break;
        }
    }
    if(f==1)
    {
        cout<<"Pronic number"<<endl;
    }
    else
    {
        cout<<"Hetromecic number"<<endl;
    }
    return 0;
}
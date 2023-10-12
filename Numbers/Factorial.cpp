#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int fact,i,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    fact=1;
    /*for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }*/
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"Fatorial of the given number is = "<<fact;
    return 0;
}
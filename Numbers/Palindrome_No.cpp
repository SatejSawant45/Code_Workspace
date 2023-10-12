#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n ,num,rem,rev;
    cout<<"Enter the number which you want to reverse. "<<endl;
    cin>>num;n=0;
    n=num;
    rem=0;rev=0;

    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"reversed number is "<<rev<<endl;;
    
    if(n==rev)
    {
        cout<<"Palindrome number";
    }
    else
    {
        cout<<"Not a palindrome number";
    }
    return 0;
}
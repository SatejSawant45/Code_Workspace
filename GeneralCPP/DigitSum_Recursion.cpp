#include<bits/stdc++.h>
using namespace std;

int Sum(int n )
{
    if(n==0) return 0;
    return Sum(n/10)+(n%10);
    
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The sum of digits of the given number is = "<<Sum(n);
}
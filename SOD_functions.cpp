#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int rem,digit_sum;

    digit_sum=0;rem=0;
    while(n>0)
    {
  rem=n%10;
  digit_sum=digit_sum+rem;
  n=n/10;
    }
  return digit_sum;

}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<digit_sum(a)+digit_sum(b);//Pass by value
    //A copy of a and b is passed in above digit sum function.
}
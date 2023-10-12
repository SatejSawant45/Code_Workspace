#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
   if(n == 0) return 1;
    return fact (n-1)*n;
}





int main()
{ 
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  cout<<"The factorial of given number is :- "<<fact(n)<<endl;
}
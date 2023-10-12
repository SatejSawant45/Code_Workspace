#include<bits/stdc++.h>
using namespace std;

  


int ArraySum(int n,int arr[])
{
    if(n<0) return 0;
   return ArraySum(n-1,arr)+ arr[n];
}
int main()

{
    int n;
int arr[n];int i;
 cin>>n;
  for(i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  cout<<"The sum of the elements of the given array is = "<<ArraySum(n-1,arr);
}
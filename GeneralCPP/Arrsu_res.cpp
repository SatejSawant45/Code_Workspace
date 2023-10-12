#include<bits/stdc++.h>
using namespace std;

int arrSum(int arr[] , int n)
{
    if(n==0)
    {
        return arr[0];
    }
  return  arrSum(arr,n-1) + arr[n];
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    sum =  arrSum(arr,n-1);
    cout<<sum<<endl;
}
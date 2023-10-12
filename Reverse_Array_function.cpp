#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int low,int high )
{
    int i=low,j=high;    
  while(i<j)
  {
      swap(arr[i],arr[j]);
      i++;
      j--;
  }
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

    rev(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
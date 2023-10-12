#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int j=1 ,sum=0;
    long long int n;
    cin>>n;
    long long int  arr[n];
    for(long long int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
   /* if(arr[n-1]==0)
    {
      arr[n-1]++;
      for(int i=n-1;i>=0;i--)
      {
        sum = sum + arr[i]*j;
        j= j*10;
      }
    }
    else
    {*/
       for(long long int i=n-1;i>=0;i--)
       {
        sum = sum + arr[i]*j;
        j=j*10;
        cout<<sum<<endl;
       }
       sum = sum +1;
  
   // }
    cout<<sum<<endl;
    
    /*vector<int> v;
    int rem = 0 , s=0;
    while(sum>0)
    {
       rem = sum % 10;
       v.push_back(rem);
       sum = sum /10;
    }
    vector<int >v1;

   for(int i=v.size()-1;i>=0;i--)
   {
      v1.push_back(v[i]);

   }
   for(int i=0;i<v1.size();i++)
   {
    cout<<v1[i]<<" ";
   }*/


}

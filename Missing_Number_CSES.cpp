#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<long long> v;
   int nums;
   cin>>nums;

   long long n = nums;

   for(long long i=1;i<n;i++)
   {
     int x;
     cin>>x;
     v.push_back(x);
   }
   long long int ans=0;
   for(int i=0;i<v.size();i++)
   {
      ans = ans + v[i];
   }

//    sort(v.begin(),v.end());

//    for(long long i=0;i<v.size();i++)
//    {
//      if(v[i]!=i+1LL)
//      {
//         cout<<v[i]-1LL;
//      }
//    }

   long long int sum1 = n*(n+1);
   long long int sum2 = sum1/2;

   long long int number = sum2 - ans;

   cout<<number;
}
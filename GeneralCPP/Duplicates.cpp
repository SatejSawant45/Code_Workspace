#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cin>>n;

   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    nums.push_back(x);
   }
   vector<int> freq(100001,0);
   vector<int> :: iterator it;
      for(it=nums.begin();it!=nums.end();it++)
      {
         freq[nums[it]]++;
      }  
      for(int i=0;i<100001;i++)
      {
          if(freq[i]>=2)
          {
              cout<<"yes";
              break;
          }
          
      } 
      cout<<"no";
    }

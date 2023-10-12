#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   vector<int> nums;

   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    nums.push_back(x);
   }

   int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if( nums[i]==nums[j] && i<j )
                {
                    count=count+1;
                    cout<<count<<endl;

                }
            }
        }

    
        


}
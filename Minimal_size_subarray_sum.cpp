#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> nums;
    for(int p=0;p<n;p++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;


        // int len=0; int sum=0;
        // int i=0,j=0; int mn=1e5; int flag=0;
        // while(j<nums.size())
        // {
        //     if(flag==0)
        //     {
        //     sum=sum+nums[j];
        //     }

        //     if(sum>=target)
        //     {
        //         mn=min(mn,j-i+1);
        //         if(flag==0)
        //         {
        //             sum=sum-nums[i];
        //         }
        //         i++;
        //         flag=1;
        //     }
        //     else
        //     {
        //        j++;
        //        flag=0; 
        //     }
            
        // }  
        // cout<< mn<<endl;
            

         int i=0,j=0,sum=0,mn=INT_MAX,flag=0;
        while(j<=nums.size()-1)
        {
            sum+=nums[j];
            // if(sum>=target)
            // {
            //     int x=j-i+1;
            //     flag=1;
            //     mn=min(mn,x);
            //     sum-=nums[i];
            //     i++;
            // }
         while(sum>=target)
            {
             mn=min(mn,j-i+1);
             sum-=nums[i];
             i++;
            }
         j++;
        }
        if(flag==0) return 0;
        cout<<mn;
        
}
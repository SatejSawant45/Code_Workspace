#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,q;
      cin>>n>>q;
      vector<int> gain;
       vector<int> loss(n); 
       vector<int> query(q);
      for(int i=0;i<n;i++)
      {
        int x;
        cin>>x;
        gain.push_back(x);
        
      }
      
      for(int i=0;i<n;i++)
      {
        int p;
        cin>>p;
        loss.push_back(p);
      }
 



      for(int i=0;i<q;i++)
      {
        int z;
        cin>>z;
        query.push_back(z);
      }
       int y=0;
      
        vector<int> diff;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            y=gain[i]-loss[i];
            cout<<y<<endl;
            diff.push_back(y);
        }
      int mindays=INT_MAX;int days,sum;
        
        // sort(diff.begin(),diff.end());
        
    
         for(int i=0;i<q;i++)
        {
            cout<<diff[i]<<" ";
        }
        
        
        // int mindays=-1;
        for(int i=0;i<q;i++)
        {
            sum=0;days=0;
            for(int j=n-1;j>=0;j--)
            {
                sum=sum+diff[i];
                if(sum>=query[i])
                {
                    days=n-j+1;
                    mindays=min(mindays,days);
                }
            }
            
            
                ans.push_back(mindays);
            
        }
        for(int i=0;i<q;i++)
        {
            cout<<ans[i]<<" ";
        }















        //   vector<int> diff;
        // vector<int> ans;
        // int y=0;
        // for(int i=0;i<n;i++)
        // {
        //     y=gain[i]-loss[i];
        //     diff.push_back(y);
        // }
        // int days;
        // int mindays=INT_MAX;
        // int sum;
        
        // sort(diff.begin(),diff.end());
        
        
        // for(int i=0;i<q;i++)
        // {
        //     sum=0;days=0;
            
        //     for(int j=n-1;j>=0;j--)
        //     {
        //         sum=sum+diff[i];
        //         if(sum>=query[i])
        //         {
        //             days=n-j+1;
        //             break;
        //             // mindays=min(mindays,days);
        //         }
        //     }
        //     if(days==0)
        //     {
        //         ans.push_back(-1);
        //     }else
        //     {
        //     ans.push_back(days);
        //     }
        // }
        // return ans;
        
        
        
        
}
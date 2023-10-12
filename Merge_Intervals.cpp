#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
     vector<int> ans1;
     vector<vector<int>> ans2;
        for(int i=0;i<intervals.size()-1;i=i+2)
        {
           
          
                if(intervals[i][1]>=intervals[i+1][0] && intervals[i+1][0]>=intervals[i][0])
                {
                    ans1.push_back(intervals[i][0]);
                    ans1.push_back(intervals[i+1][1]);
                }
                else
                {
                    ans1.push_back(intervals[i][0]);
                    ans1.push_back(intervals[i][1]);
                    ans1.push_back(intervals[i+1][0]);
                    ans1.push_back(intervals[i+1][1]);  
                }
            
        }
        for(int i=0;i<ans1.size();i++)
        {
            cout<<ans1[i]<<" ";
        }
     
     for(int i=0;i<ans1.size();i=i+2)
     {
         vector<int> temp;
         temp.push_back(ans1[i]);
         temp.push_back(ans1[i+1]);
         ans2.push_back(temp);
         temp.clear();
     }

     for(int i=0;i<ans2.size();i++)
     {
        cout<<"[";
        for(int j=0;j<2;j++)
        {
            cout<<ans2[i];
        }
      
     }
}
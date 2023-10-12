#include<bits/stdc++.h>
using namespace std;

int main()
{
int n1,n2;
cin>>n1>>n2;
    vector<int> nums1; 
    vector<int> nums2;
 
 for(int i=0;i<n1;i++)
 {
    int x;
    cin>>x;
    nums1.push_back(x);
 }
   

for(int i=0;i<n2;i++)
 {
    int x;
    cin>>x;
    nums2.push_back(x);
 }



    vector<vector<int>> answer(2);
        
        map<int,int> m;

        map<int,int> m2;
        map<int,int> count1;
        map<int,int> count2;

        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(m[nums1[i]]==0 && count1[nums1[1]]==0)
            {
                answer[0].push_back(nums1[i]);
                count1[nums1[i]]++;
            }
        }


        for(int i=0;i<nums1.size();i++)
        {
            m2[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m2[nums2[i]]==0 && count2[nums2[i]]==0)
            {
                answer[1].push_back(nums2[i]);
                 count2[nums2[i]]++;
            }
        }

         int p0=answer[0].size();
        int p1=answer[1].size();


    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<answer[i].size();j++)
    //     {
    //         cout<<answer[i][j];
    //     }
    // }

    for(int i=0;i<p0;i++)
    {
        cout<<answer[0][i]<<" ";
    }
    for(int i=0;i<p1;i++)
    {
        cout<<answer[1][i]<<" ";
    }
   
}
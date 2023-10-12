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

    // Two pointer

    int j=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<0)
        {
            if(j<=i)
            {
                swap(nums[i],nums[j]);
            }
            j++;
        }
    }

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
     
     cout<<endl;
    //partitioning

    int high=nums.size()-1;
    int low=0;

    while(low<=high)
    {
        if(nums[low]<0 && nums[high]<0)
        {
            low++;
        }
        else if(nums[low]>0 && nums[high]>0)
        {
            high--;
        }
        else if(nums[low]<0 && nums[high]>0)
        {
            low++;
            high--;
        }
        else
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }

     for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
     cout<<endl;
    //Dutch National Flag algorithm

    int l=0;
    int h=nums.size()-1;

    while(l<=h)
    {
        if(nums[l]<0)
        {
            l++;
        }
        // else if(nums[h]>0)
        // {
        //     h--;
        // }
        // else
        // {
        //     swap(nums[l],nums[h]);
          
        // }

        // OR
        
        else
        {
            swap(nums[h],nums[l]);
            h--;

        }
    }

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }


}
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


    int index = -1;

        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index = i;
                break;
            }
        }
        cout<<"Index = "<<index<<endl;
        int count =0;

        if(index == -1)
        {
            reverse(nums.begin(),nums.end());
            count =1;

        }
        else
        {
        // for(int i=index+1;i<nums.size();i++)
        for(int i=nums.size()-1;i>index;i--)
        {
              if(nums[index] < nums[i])
              {
                  cout<<"Swap  "<<nums[index]<<" & "<<nums[i]<<endl;
                  swap(nums[index],nums[i]);
                  break;
              }
        }

        reverse(nums.begin()+index+1,nums.end());
        count = 2;
        }

    for(int j=0;j<nums.size();j++)
    {
        cout<<nums[j]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;

}
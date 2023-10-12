#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;


void generate(vector<int> &subset , int i , vector<int>nums)
{
    if(i==nums.size())
    {
        subsets.push_back(subset);
        return;
    }
        //ith element not considered
        generate(subset,i+1,nums);

        //ith element considered

        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back();
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> empty;
    for(int j=0;j<n;j++)
    {
        cin>>nums[j];
    }

    generate(empty,0,nums);

    for(auto subset : subsets)
    {
        for(auto val : subset)
        {
            cout<<val<<" ";
        }
        cout<<endl;

    }
}









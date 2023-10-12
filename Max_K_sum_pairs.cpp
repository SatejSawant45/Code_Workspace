#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;

    vector<int> nums(p);

    for(int i=0;i<p;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int k;
    cin>>k;

     int n = nums.size();
        sort(nums.begin(),nums.end());

        int i=0,j=n-1;
        int count = 0;

        while(i!=j)
        {
            if(nums[i]+nums[j]==k)
            {
               count++;
               i++;
               j--;
            }
            else if((nums[i]+nums[j]) < k )
            {
                i++;
            }
             else if((nums[i]+nums[j]) > k )
            {
                j--;
            }
            else
            {
                i++;j--;
            }
        }
        cout<<count<<endl;
}

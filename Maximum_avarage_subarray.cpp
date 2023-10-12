#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int> nums;
    for(int z=0;z<n;z++)
    {
        int x;
        cin>>x;
        nums.push_back(x);

    }
      int i=0,j=k-1; float avg , maxsum=0; 
        float sum;float maxavg=INT_MIN;
        while(j<nums.size())
        {
            sum=0.0;
            for(int p=i;p<=j;p++)
            {
                sum=sum+nums[p];
            // cout<<sum<<endl;
            }
            avg=sum/k;
            maxsum=max(maxsum,sum);
            maxavg=max(maxavg,avg);
            i++;j++;
        }
        cout<<maxavg;
}
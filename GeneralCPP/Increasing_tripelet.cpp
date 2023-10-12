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

    int diff;
    cin>>diff;

     int count=0;
        int i=0,j=1,k=2;

        

        while(k<nums.size())
        {
            if((nums[j]-nums[i])==diff && (nums[k]-nums[j])==diff)
            {
                count++;
                cout<<count<<endl;
            }
            i++;
            j++;
            k++;
            cout<<i<<" "<<j<<" "<<k<<endl;
        }
        
        cout<<count;
}
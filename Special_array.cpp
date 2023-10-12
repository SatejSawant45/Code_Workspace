#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
        cout<<arr[i];

    }
    //   bool flag=0;
    //    vector<int>presum(n);
    //    presum[0]=arr[0];

    //    for(int i=1;i<n;i++)
    //    {
    //        presum[i]=presum[i-1]+arr[i];
    //    }
    //    for(int i=1;i<n;i++)
    //    {
    //        if(presum[i-1]<arr[i])
    //        {
    //            flag=1;
    //        }
    //        else
    //        {
    //            flag=0;
    //        }
    //    }
    //    cout<<flag;
}
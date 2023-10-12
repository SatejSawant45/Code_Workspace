#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

         int sum=0;
        int totsum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=0;
               cout<<"SUM "<<sum<<endl;
            for(int j=i;j<arr.size();j++)
            {
                sum = sum + arr[j];
                   cout<<"SUM "<<sum<<endl;
               if((j-i+1)%2!=0)
               {
                   totsum = totsum + sum;
               }
               
                   cout<<"TOTSUM "<<totsum<<endl;
          
            }
        }

        cout<<totsum<<endl;
}
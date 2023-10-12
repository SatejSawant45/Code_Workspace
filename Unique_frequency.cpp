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

    }

    

    
    map<int ,int> m;
         
         for(int i=0;i<arr.size();i++)
         {
             m[arr[i]]++;
         }

         map<int,int> ::iterator it1;
         map<int,int> ::iterator it2;

         for(it1=m.begin();it1!=m.end();it1++)
         {
           for(it2=it1++ ;it2!=m.end();it2++)
           {
            cout<<(*it1).second<<" "<<(*it2).second<<endl;
           }
         }
}
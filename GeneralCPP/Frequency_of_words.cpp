#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    string list[n];
    
    map<string,int> m;
           int count = 0 ;
        cin>>n;
        
           map<string,int> :: iterator it;
           for(int i=0;i<n;i++)
           {
               cin>>list[i];
               m[list[i]]++;
           }
           for(it=m.begin();it!=m.end();it++)
           {
               if((*it).second==2)
               {
                   count++;
               }
               
           }
           cout<<count;
}
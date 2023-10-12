#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s>>t;

     int count=0;
        int p=-1;
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=p+1;j<t.size();j++)
            {
               if(s[i]==t[j])
               {
                   count=count+1;
                   cout<<s[i]<<" "<<t[j]<<endl;
                   p=j;
                   break;
               }
            }
        }
        cout<<count<<endl;

        if(count==s.size())
        {
            cout<<" true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
        
}



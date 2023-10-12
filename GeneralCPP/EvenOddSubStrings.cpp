#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        string s1="",s2="";
        
        map<char,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        
        
        for(auto pr : m)
        {
            if(pr.second%2==0)
            {
                s1.push_back(pr.first);
            }
            else
            {
                s2.push_back(pr.first);
            }
        }
    

      if(s1!="" ) 
      { 
        cout<<s1<<" ";
      }
      else if(s2!="")
      {
        cout<<s2<<" ";
      }
      else
      {
        cout<<"-1";
      }
    }
    
    
    return 0;
}

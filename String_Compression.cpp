#include<bits/stdc++.h>
using namespace std;

int main()
{

     int m;
     cin>>m;
     vector<char> chars(m);

     for(int i=0;i<m;i++)
     {
        char x;
        cin>>x;
        chars.push_back(x);
     }







       string s,p; int ans; int l=chars.size();
       vector<int> c;
       int count=0;
       if(l==1)
       {
           s.push_back(chars[0]);
           return 1;

       }

       for(int i=0;i<chars.size()-1;i++)
       {
           if(chars[i]==chars[i+1])
           {
               count++;
           }
           else
           {
               p = to_string(count);

               s.push_back(chars[i]);

               for(int j=0;j<1;j++)
               {
                   s.push_back(p[i]);
               }
               
               count=0;
           }
       }  

       if(chars[l-1]!=chars[l-2])
       {
           
           s.push_back(chars[i]);
           s.push_back('1');

       }

       for(int i=0;i<s.size();i++)
       {
           chars[i] = s[i];
       }
       
       ans = c.size() + s.size();
       return ans;        
}

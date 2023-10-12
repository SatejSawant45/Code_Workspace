#include<bits/stdc++.h>
using namespace std;

int main()
{
    string haystack,needle;
    cin>>haystack>>needle;

    int n = needle.size();

        int i=0,j=0,len=j-i+1;
        
        string temp="";

        while(j<haystack.size())
        {
           if(temp.size()==needle.size())
            {
               if(temp == needle)
               {
                  cout<<"YES"<<endl;
                  break;
               
               } 
               temp = temp.substr(1,needle.size()-1);
               temp.push_back(haystack[j]);
               cout<<temp<<endl;
               i++;
               j++;
               
                cout<<temp.size()<<endl;
            }
            else
            {
                temp.push_back(haystack[j]);
                 cout<<temp<<endl;
                j++;
                
                 cout<<temp.size()<<endl;

            }
        }

        cout<<"NO";
}
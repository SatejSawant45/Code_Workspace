#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    
        string c;
        string s;
        int n;
        int count = 0;

        unordered_map<char,int> m;


        for(int i=str1.size()-1;i>=0;i--)
        {
            count =0;
            for(int j=str2.size()-1;j>=0;j--)
            {
                 if(str2[j]==str1[i] && m[str2[i]]==0)
                 {
                   m[str2[i]]++;
                   c.push_back(str2[i]);
                   count++;
                   break;

                }
            }
            if(count==0)
            {
                cout<<"Not Possible"<<endl;
                
            }

        }
        
        
       
        for(int i=c.size()-1;i>=0;i--)
        {
            s.push_back(c[i]);
        }

        cout<<s<<endl;

}
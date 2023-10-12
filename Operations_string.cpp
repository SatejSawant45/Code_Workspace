#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;


        if(s1.size()!=s2.size())
        {
            cout<<"false 1";
            return 0;
        }
        map<char,int> m1;
        map<char,int> m2;
        
        
        for(int i=0;i<s1.size();i++)
        {
            m1[s1[i]]++;
        }
         for(int i=0;i<s2.size();i++)
        {
            m2[s2[i]]++;
        }
        
        for(int i=0;i<s1.size();i++)
        {
            if(m1[s1[i]]!=m2[s1[i]])
            {
                cout<<"false 2";
                return 0;
            }
        }
        

     for(int i=0;i<s1.size()-2;i++)
     {
          
            if((s1[i] == s2[i+2] && s2[i]==s1[i+2]) || (s1[i]==s2[i] && s1[i+2]==s2[i+2]))
            {
                cout<<"Continue"<<endl;
              continue;   
            }
            else
            {
                cout<<" false 3"<<endl;
                return 0;
            }
            
            
    }
    cout<< "true"<<endl;;
}

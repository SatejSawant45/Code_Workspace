#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin>>s;
        char c1,c2;

        int i=0,j=s.size()-1;
        int p=s.size()/2;
        
        //   while(i<p)
        // {
          
        //     if(((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') || (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')) && ((s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') ||(s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')))
        //     {
        //         swap(s[i],s[j]);
        //         i++;
        //         j--;

        //     }
   
        //      else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') || (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
        //     {
        //         j--;
        //     }
      
        //      else if((s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') || (s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
        //     {
        //         i++;
        //     }
        //     else
        //     {
        //         i++;
        //         j--;
        //     }
        // }


        unordered_set<char> v={'a','e','i','o','u','A','E','I','O','U'};

            while(i<p)
        {
            if(v.find(s[i])!=v.end() && v.find(s[j])!=v.end())
            {
                swap(s[i++],s[j--]);
            }
            else if(v.find(s[i])!=v.end())
            {
                j--;
            }
            else if(v.find(s[j])!=v.end())
            {
                i++;
            }
            else
            {
                i++;j--;
            }
        }
      cout<<s<<endl;

    
}
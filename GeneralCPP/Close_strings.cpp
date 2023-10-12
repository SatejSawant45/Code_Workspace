#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word1,word2;
    cin>>word1>>word2;

     int  n1=word1.length();
      int   n2=word2.length();

        unordered_map<char,int> m1;
        unordered_map<char,int> m2;

        if(n1!=n2)
        {
            cout<<"false";
            return 0;
        }


        for(int i=0;i<n1;i++)
        {
             m1[word1[i]]++;
        }

        for(int i=0;i<n2;i++)
        {
            if(m1.find(word2[i])==m1.end())
            {
                cout<<"false";
                return 0;
            }
             m2[word2[i]]++;
        }
        for(int i=0;i<n1;i++)
        {
            if(m2.find(word1[i])==m2.end())
            {
                cout<<"false";
                return 0;
            }
             
        }

        vector<int> v1(n1),v2(n2);




        for(auto pr1 : m1)
        {
           v1.push_back(pr1.second);
        }

         for(auto pr2 : m2)
        {
           v2.push_back(pr2.second);
        }


        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        for(int i=0;i<n1;i++)
        {
            if(v1[i]!=v2[i])
            {
                cout<<"false";
                return 0;
            }
        }

        cout<<"true";
        

    
}
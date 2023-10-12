#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word1;
    string word2;
    cin>>word1>>word2;

        int n1,n2;
        n1=word1.size();
        n2=word2.size();
        string str="";
       
        //i--> word 1  , j--> word2

        if(n1>n2 || n1==n2)
        {
            int i=0,j=0;
            while(i<word1.size())
            {
                str.push_back(word1[i]);
                if(j<word2.size())
                {
                    str.push_back(word2[j]);
                }
                i++;j++;
            }

        }
        cout<<n1<<endl;
        // else
        // {
        //     int i=0,j=0;
        //     while(j<word2.size())
        //     {
        //         str.push_back(word1[j]);
        //         if(i<word1.size())
        //         {
        //             str.push_back(word2[j]);
        //         }
        //         i++;j++;
        //     }

        // }
        
}
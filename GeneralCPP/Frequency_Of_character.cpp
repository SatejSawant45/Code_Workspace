#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int freq[26];
    string str2;
    
    cin>>str2;
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str2.length();i++)
    {
        freq[(int)(str2[i])-97]++;
    }
    
    for(int i=0;i<25;i++)
    {
        cout<<char(i+'a')<<" "<<freq[i]<<endl;
    }
   
 
}
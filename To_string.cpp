#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count = 100;
    string s;
    vector<char> c;
    s = to_string(count);

    cout<<count<<endl;
    cout<<"Printing all characters"<<endl;

    for(int i=0;i<s.size();i++)
    {
       c.push_back(s[i]);
    }

    
    for(int i=0;i<c.size();i++)
    {
       cout<<c[i]<<" ";
    }
}
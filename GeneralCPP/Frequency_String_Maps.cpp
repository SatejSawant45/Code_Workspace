#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int N; string s;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        cin>>s;
        m[s]++;
    }

    for(auto val :m)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string M;
    string S;

    string temp="";

    cin>>M;
    cin>>S;

    int loc=0;

   
    // for(int i=0;i<M.size();i++)
    // {
    //     temp.clear();
    //     for(int j=i;j<i+S.size() && j<M.size();j++)
    //     {
    //        temp.push_back(M[j]);
    //     }
    //     cout<<temp<<endl;
    //     if(temp == S)
    //     {
    //         loc = i ;
    //     }
    // }

    int n = S.size();
    int j=n-1,i=0;
    while(j<M.size())
    {
       temp = M.substr(i,n);
       cout<<temp<<endl;
       if(temp == S)
       {
        loc = i;
        break;
       }
       i++;
       j++;
       temp.clear();
    }

    cout<<loc;


    
}
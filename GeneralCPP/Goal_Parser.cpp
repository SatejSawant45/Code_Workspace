#include<bits/stdc++.h>
using namespace std;

int main()
{
    string command;
    string str , s1,s2,s3,s4;
    cin>>command;
   
    //cout<<command;

    for(int i=0;i<command.size();i++) 
    {
        if(command[i]=='G')
        {
            s4=s4+"G";
        }
        if(command[i]=='(' && command[i+1]==')')
        {
            s4=s4+"o";

        }
        if(command[i]=='(' && command[i+1]=='a')
        {
           s4=s4+"al";
        }
    }
    cout<<s4;

    
}
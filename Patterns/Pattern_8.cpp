#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i && j<=(10-i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<""<<endl; 
    }
}
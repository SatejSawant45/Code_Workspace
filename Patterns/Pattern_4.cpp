#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*      for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=1;j--)
        {
            if(j>i)
            {
                cout<< " ";

            }
            else{
                cout<<"*";
            }
        }
        cout<<""<<endl;

    }*/
    for(int i=1;i<=5;i++ )
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=(6-i))
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
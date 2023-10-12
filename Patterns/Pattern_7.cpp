
#include<bits/stdc++.h>
using namespace std;

int main()
{
/*    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=(6-i) && j<=4+i)
            {
                if( i%2==0)
                {
                    if(j%2==0)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                else
                {
                    if(j%2!=0)
                    {
                    cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
}*/


int k;
for(int i=1;i<=5;i++)
{
    k=1;
    for(int j=1;j<=9;j++)
    {
        if(j>=(6-i) && j<=(4+i) && k==1)
        {
            cout<<"*";
            k=0;
        }
        else
        {
            cout<<" ";
            k=1;
        }
    }
    cout<<""<<endl;
}

}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digit;
    vector<int> v;
     int n,m;
     cin>>n;
     m=n+1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        digit.push_back(x);
    }
    int i,j;

    int cnt=0; 

  v.push_back(0);
    for(i=0;i<digit.size();i++)
    {
        v.push_back(digit[i]);
    }
   

    
    /*
    cout<<"The entered vector is : "<<endl;
   for(i=0;i<m;i++)
    {
        cout<<v[i]<<endl;
    }

    for(i=v.size()-1;i>=0;i--)
    {
        if(v[i]==9 || v[i]==10)
        {
            v[i]=0;
            v[i-1]++;
        }
        else if(v[i]!=9 && cnt!=1)
        {
            v[i]++;
            cnt++;
            break;
        }
    }
    
    cout<<"on addition of one , the vector becomes :- "<<endl;

    for(i=0;i<v.size();i++)
    {
        
        cout<<v[i]<<endl;
    }
    */

  /* for( i=v.size()-1;i>=0;i--)
   {
      v[i]=v[i]+1;
      if(v[i]>=10)
      {
        v[i]=0;
      }
      else
      {
        break;
      
   }
   if(v[0]==0)
   {
    v.erase()
   }*/
    




}

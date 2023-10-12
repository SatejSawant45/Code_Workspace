#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

     int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
       int a1[3];
          for(int i=0;i<n;i++)
       {
           a1[i]=0;
       }

       
       for(int i=0;i<n;i++)
       {
           a1[a[i]]++;
       }
         for(int i=0;i<n;i++)
       {
           cout<<a1[i]<<" ";
       }
       cout<<endl;
       
         
       
           int cnt = 0;
           
           for(int j=0;j<a1[0];j++)
           {
               a[cnt] = 0;
               cnt++;
           }
          
            for(int j=0;j<a1[1];j++)
           {
               a[cnt] = 1;
               cnt++;
           }
          
            for(int j=0;j<a1[2];j++)
           {
               a[cnt] = 2;
               cnt++;
           }

           for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    } 
          
}
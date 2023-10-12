#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t,i,k,j,cnt,c,ele;
    cin>>t;
    c=0;cnt=0;
    
    for(k=1;k<=t;k++)
    {
     int n;
        cin>>n;
    int arr[n];
    for(int p=0;p<n;p++)
    {
        cin>>arr[p];
    }
    
    int check[10001];
        for(int h=0;h<10001;h++)
        {
            check[h]=0;
        }
    for(i=0;i<n;i++)
    {
        ele=arr[i];cnt=0;
        if(check[arr[i]]==0)
     {
        for(j=0;j<n;j++)
        {
            
            if(arr[j]==ele)
            {
                cnt +=1;
            }
        }
        if(cnt%2==0)
        {
            c+=1;
        }
            check[arr[i]]=1;
        }
    }
    cout<<c<<endl;
    }

    
    
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        
        {
          cin>>arr[i];  
        }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            max=arr[i+1];
        }
    }
    int hsh[max]; int i;
    for(i=0;i<max;i++)
    {
        hsh[i]=0;
    }
    for(i=0;i<n;i++)
    {
        hsh[arr[i]]++;
    }
    int ans;
    int fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    int j; int fact_h=1; int factarr[max];
    for(i=0;i<max;i++)
    {
        for(j=1;j<=hsh[i];j++)
        {
            fact_h=fact_h * j;
        }
        factarr[i]=fact_h;
    }
    int prod=1;
    for(i=0;i<max;i++)
    {
        if(factarr[i]>=2)
        {
        prod=prod*factarr[i];
        }    
    }
    
    ans = fact / ( n*prod );
    
    cout<<ans<<endl;
     return 0;
}

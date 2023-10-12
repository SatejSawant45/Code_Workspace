#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a;
	    cin>>n>>a;
	    int c[n],d[n];
	    int m1=-1,m0=1e7, sum=0,ans=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        // int x,y;
	        // cin>>x>>y;
	        // c.push_back(x);
	        // d.push_back(y);
	      cin>>c[i]>>d[i];
		}
	    
	    for(int i=0;i<n;i++)
	    {
	        m1=-1,m0=1e7,sum=0;
	     for(int j=i;j<n;j++)
	     {
	         sum=sum+c[j];
	         m1=max(m1,d[j]);
	         m0=min(m0,d[j]);
	         ans=max(ans,((j-i+1)*10)-sum-((m1-m0)*(m1-m0)));
	     }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;

//     {
// 	// your code goes here
// 	int t; cin>>t;
// 	while(t--)
// 	{
// 	    int n,a; cin>>n>>a;
// 	    vector<int>c(n),d(n);
// 	    int sumc=0,mx=-1,mn=1e7,ans=0;
	    
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        cin>>c[i]>>d[i];
// 	    }
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        for(int j=i; j<n; j++)
// 	        {
// 	             sumc+=c[j];
// 	        mx=max(mx,d[j]);
// 	         mn=min(mn,d[j]);
// 	         ans=max(ans,(((j - i + 1)*a) - sumc - (mx - mn)*(mx-mn)));
// 	        }
// 	        sumc=0;
// 	        mx=-1;
// 	        mn=1e7;
// 	    }
// 	    cout<<ans<<endl;
	   
	    
// 	}
// 	return 0;
// }
}

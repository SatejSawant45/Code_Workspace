#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int num;int n,r,c;int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin >> num; 
		int rem,cnt;
		rem=0;cnt=0;r=0;c=0;
        n=num;
		while(n>0)
		{
			r=n%10;
			c=c+1;
			n=n/10;
		}	
       
		while(num>0)
		{
			rem=num%10;
			if(num%rem==0)
			{
				cnt +=1;
			}
			num=num/10;
		}
		if(cnt==c)
		{
			cout<<"YES"<<endl;
		}
		else {
		cout<<"NO"<<endl;
		}
	}
	return 0;
}
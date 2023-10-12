/*You have been given an integer array A and a number K. Now, you need to find out whether any two different elements of the array A sum to the number K. Two elements are considered to be different if they lie at different positions in the array. If there exists such a pair of numbers, print "YES" (without quotes), else print "NO" without quotes.

Input Format:

The first line consists of two integers N, denoting the size of array A and K. The next line consists of N space separated integers denoting the elements of the array A.

Output Format:

Print the required answer on a single line.*/

//TWO POINTER METHOD.




#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n , k , s=0 , ans=0;
    cin>>n>>k;
    int arr[n];
	for(int p=0;p<n;p++)
	{
		cin>>arr[p];
	}
    sort(arr,arr+n);
    int i=0 ,j=n-1;
    
	while(i<j)
	{
		s=arr[i]+arr[j];
		if(k==s)
		{
			ans++;
			i++;
			j--;
		}
		else if(k>s)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	if(ans>0)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}

}



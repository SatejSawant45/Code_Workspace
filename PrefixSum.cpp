#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
     int n,sum=0,arraysum=0,q,i;
     int arr[n];
     cout<<"Enter the number of elements"<<endl;

     cin>>n;
     

     cout<<"Enter the array elements"<<endl;

     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     cout<<"Enter the queries"<<endl;
     cin>>q;
    
    int prefix[n+1];


    for(int j=0;j<n;j++)//assigning garbage  value to zero
    {
        prefix[j]=0;
    }
    prefix[0]=0;
    for(i=0;i<n;i++) //calculating prefix sum
    {
        sum=sum+arr[i];
        prefix[i+1]=sum;
    } 
    while(q--)  //answering queries
    {
        int l,r;

        cin>>l>>r;
        int arraysum = 0 ;
        arraysum = prefix[r] - prefix[l-1] ;
        cout<<arraysum<<endl;

    }
  
   return 0;
}
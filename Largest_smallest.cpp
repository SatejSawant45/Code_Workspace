#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
        int sum=0;
         int i,small,large;
    
    cout<<"Enter any ten integer numbers"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    small=arr[0];
    large=arr[1];

    for(i=0;i<10;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
    
        }
        else if(arr[i]>large)
        {
            large=arr[i];
        }
        else
        {
            sum=sum+arr[i];
        }
    
    }
    cout<<"Largest element"<<large<<endl;;
    cout<<"Smallest element"<<small<<endl;
}
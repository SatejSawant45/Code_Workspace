#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    
    
    cin>>n>>k;
    long long int Arr[n]; int i=0,j=0; long long int mx = 0 , sum =0 ;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
     while(j<n)
        {
            sum = sum+ Arr[j];
            
            if((j-i+1)<k)
            {
                j++;
            }
            else if((j-i+1)==k)
            {
                mx = max(mx,sum);
                sum= sum - Arr[i];
                i++;
                j++;
            }
            
            
        }
    cout<<mx;
    
}  
    
    
   /* sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
                                   
    for(int i=n-1;i>(n-1)-k;i--)
    {
        sum = sum + arr[i];
    }

    cout<<sum<<endl;*/


   /* for(auto i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
         maxsum=sum;
    for(auto j=1;j+k<=n;j++)
    {
       sum = sum-arr[j-1] +arr[j+k-1];
       maxsum = max(maxsum,sum);
    }
    cout<<maxsum;

}*/



/*int main()
{

int N,K;
cin>>N>>K;
int Arr[N];
for(int p=0;p<N;p++)
{
cin>>Arr[p];
}
 int i=0;

        int j=0;

        long sum=0;

        long max=INT_MIN;

        

        while (j<N)

        {

            sum=sum+Arr[j];

            

              if (max<sum)

            {

                max=sum;

            }

            if ((j-i+1) <K) j++;

            

            else if ((j-i+1)==K)

            {

                sum=sum-Arr[i];

                i++;

                j++;

            }

            

          

        }

        cout<< max;

    }*/
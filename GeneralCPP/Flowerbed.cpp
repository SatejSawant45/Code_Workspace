#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n; // n= (given in question)
    int s;
    cin>>s; // Size of vector
    vector<int> flowerbed(s);

    for(int i=0;i<s;i++)
    {
        
        cin>>flowerbed[i];
    }





        int contiZero=INT_MIN;
        int i=0; int ans=0; int p=0; int count=0;
        while(i<s)
        {
           if(flowerbed[i]==0)
           {
            count=0;
            while(flowerbed[i]!=1 && i<s)
            {
                count++;
                i++;

            }



             if(count%2!=0 && count>=3)
             {
                 ans = ans + ((count-1)/2) ;
             }
             else if(count%2==0 && count>=3)
             {
                 ans = ans + ((count-1)/2) ;
             }
             else if(count==2 && (i==2 || i==s))
             {
                ans= ans+ 1;
             }
              else if(count==1 && (s==1 ))
             {
                 ans = ans + 1;
             }
             
             }
           else{
            i++;
           }
          
        }
            
            
            
            if(ans>=n)
        {
            cout<<"true"; //return true
        }
        else
        {
            cout<<"false";  //return false
        }
        

    
        cout<<"   "<<ans;
        
}
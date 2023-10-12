#include<bits/stdc++.h>
using namespace std;

int main()
{
     int s;
    cin>>s;
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
           }
           else{
            i++;
           }
           contiZero = max (contiZero,count);
        }
        
        cout<<contiZero<<endl;
        



}
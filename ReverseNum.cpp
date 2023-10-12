#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

     int m=0,count=0,dig=0;
        m=n;

        while(m>0)
        {
           dig=m%10;
           count++;
           m=m/10;
        }
        cout<<count<<endl;
        int p;
        int num=0,rev=0; 
        p=n;
    int i=count-1;
        while(p>0)
        {
            num = p % 10;
            rev = num* pow(10,i) + rev;
            p=p/10;
            i--;
 
       }
  cout<<"Reversed number id = "<<rev;
}
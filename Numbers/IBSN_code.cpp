#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int IBSN,n,rem,cnt,num,r,s,i;
    cout<<"enter ten digit IBSN code"<<endl;
    cin>>IBSN;
    n=IBSN;
    cnt=0;rem=0;
    num=IBSN;r=0;s=0;
    while(n>0)
    {
        rem=n%10;
        cnt=cnt+1;
        n=n/10;
   }
   if(cnt<10 || cnt>10)
   {
    cout<<"Illegal IBSN"<<endl;
   }
   else
   {
    while(num>0)
    {
      r=num%10;
      for(i=1;i<=10;i++)
      {
      s=s+(i*r);
      }
      num=num/10;
    }
    if(s%11==0)
    {
        cout<<"Legel IBSN"<<endl;
    }
    else
    {
        cout<<"Illegal IBSN"<<endl;
    }
    

   }
   return 0;
}
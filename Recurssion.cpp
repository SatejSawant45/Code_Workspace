#include<bits/stdc++.h>
using namespace std;



/*void  name(int n)
{
    if(n<0) return  ;
    cout<<"Satej"<<endl;
    name(n-1);


}
int main()
{
    int n;
    cin>>n;
    name(n);
}
int func(int l,int r,int a[])
{
    if(l>=r) return 0;
    swap(a[l],a[r]);
    func(l+1,r+1,a);
    
}
int main()
{
    int n;
    cin>>n;
   int a[n];
    int i,l=0,r=n-1;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
   func(l,r,a);
   for(i=0;i<n;i++)
   {
    cout<<a[i]<<endl;;
   }
}


int func(int x, int y)
{
    if(y==0) return 1;
  return func(x,y-1)*x;

}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<func(x,y);
}


int fibonacci(int n)
{
    if(n==0) return n;
    return fibonacci(n-1)+fibonacci(n-2);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    
}*/
int Sum(int n)
{
    if(n==0) return n;
    return Sum(n/10)+(n%10);
}
int main()
{
    int n;
    cin>>n;
    cout<<Sum(n);
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,str="";
    int k,rev=0; int rem=0,rev1=0,num;int sum=0,rem1=0;
    int n;
    cin>>s>>k;

    for(int i=0;i<k;i++)
    {
        str=str+s;
       
    }
    cout<<str<<endl;
    for(int i=str.size()-1;i>=0;i--)
    {
        n = str[i]-'0';
        rev = rev*10 + n;

    }
    cout<<rev<<endl;
    num=rev;

    while(num>0)
    {
        rem=num%10;
        rev1=rev1*10+rem;
        num=num/10;
    }
    cout<<rev1<<endl;
    


while(rev1>9)
    {
        sum=0;rem1=0;
    while(rev1>0)
    {
        rem1=rev1%10;
        sum=sum+rem1;
        rev1=rev1/10;
    }
     rev1=sum;
    }

    cout<<sum<<endl;
}
*/
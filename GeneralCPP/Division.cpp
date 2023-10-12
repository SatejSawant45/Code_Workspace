#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a ;
   
    int b;
    cin>>a>>b;
    int ans = a/b;
    cout<<ans<<endl;
    int rem = a%b;
  cout<<rem<<endl;
    int ans1 = rem/b;
  cout<<ans1<<endl;
    ans = ans + ans1;
        cout<<ans;
}
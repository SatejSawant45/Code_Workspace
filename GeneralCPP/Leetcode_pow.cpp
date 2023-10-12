#include<bits/stdc++.h>
using namespace std;



   double myPow(double x, int n) {
        // if(n==0){
        //     return 1;
        // }
        // if(x==0){
        //     return 0;
        // }
        // if(n>=0){
        //     if(n%2==0){
        //         return myPow(x*x,n/2);
        //     }
        //     else{
        //         return x*myPow(x*x,(n-1)/2);
        //     }
        // }
        // else{
        //     if(abs(n)%2==0){
        //         return myPow(1/(x*x),abs(n)/2);
        //     }
        //     else{
        //         return (1/x)*myPow(1/(x*x),(abs(n)-1)/2);
        //     }
        // }

          if(n==0)
        {
            return 1;

        }
        if(n<0)
        {
            return (myPow(1/x,-n));
        }

        double half = myPow(x,n/2);
        if(n%2==0)
        {
            return half * half;
        }
        else
        {
            return x  * half * half;
        }

        //Striver

        //  if(n==0) return 1;
        // if(n<0) {
        //     n = abs(n);
        //     x = 1/x;
        // }
        // if(n%2==0){
        //     return myPow(x*x, n/2);
        // }
        // else{
        //     return x*myPow(x, n-1);
        // }
    }
int main()
{
    double x;
    cin>>x;

    int n;
    cin>>n;

    double ans = myPow(x,n);

    cout<<ans; 


}
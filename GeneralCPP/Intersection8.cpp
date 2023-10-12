#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        
        int a;
        cin>>a;
        
        int A[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        
        
        int b;
        cin>>b;
        
        int B[b];
        for(int i=0;i<b;i++)
        {
            cin>>B[i];
        }
        
        int freqa[100001] , freqb[100001];
        for(int i=0;i<a;i++)
        {
            freqa[A[i]]++;
        }
        for(int i=0;i<b;i++)
        {
            freqb[i]=0;
        }

        
        
        
        for(int i=0;i<b;i++)
        {
            if(freqa[B[i]]!=0 &&  freqb[B[i]] < 1)
            {
             cout<<B[i]<<" "; freqb[B[i]]++  ; 
            }
        
        
        }
    }
    
    
    
    
    
    
    
    return 0;
}

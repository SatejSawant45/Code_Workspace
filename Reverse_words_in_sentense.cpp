#include<bits/stdc++.h>
using namespace std;

string reversefunc(string str)
    {
      int i=0;
      int j=str.size()-1;
      while(i<=j)
      {
        swap(str[i],str[j]);
        i++;
        j--;
      } 

      return str;  
    }

int main()
{
        string s;
        cin>>s;

        s = reversefunc(s);
        cout<<s; 
}

 
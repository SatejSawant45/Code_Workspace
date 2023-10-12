#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
if(s[0]==')'  || s[0]=='}' || s[0]==']' )
{
    cout<< "false1";
}
 else
{
    // st.push(s[0]);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]== '{' || s[i]=='[')
            {
            st.push(s[i]);
            }
            // char top =st.top();
            else if(!st.empty())
            {
              if(s[i]==')' && st.top()=='(')
              {
                // char top = st.top();
               st.pop();
              }
               else if(s[i]=='}' && st.top()=='{')
              {
                //  char top = st.top();
               st.pop();
              }   
              else if(s[i]==']' && st.top()=='[')
              {
                //  char top = st.top();
               st.pop();
              }
            //   else if(s[i]==')' || s[i]=='}' || s[i]==']')
            else
              {
                st.push(s[i]);
              }
            }
             else
              {
                st.push(s[i]);
              }
        }
        
}



        if(st.empty())
        {
            cout<<"true";
        }
        else
        {
            cout<<st.top()<<endl;
            cout<<"false";
        }
        
}
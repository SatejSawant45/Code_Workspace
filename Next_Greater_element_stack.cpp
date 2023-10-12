#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    vector<int> nums1(n1);
    vector<int> nums2(n2);

    for(int i=0;i<n1;i++)
    {
        cin>>nums1[i];
    }
     for(int i=0;i<n2;i++)
    {
        cin>>nums2[i];
    }





    //  int n1=nums1.size();
    //   int n2=nums2.size();



      vector<int> nge(n2);
      vector<int> val(n2);
      vector<int> ans(n1);
      stack<int> st;


      for(int j=0;j<nums2.size();j++)
      {
         while(!st.empty() && nums2[j] > nums2[st.top()])
         {
            nge[st.top()]=j;
            st.pop();
         }
         st.push(j);
      }
      while(!st.empty())
      {
         nge[st.top()]=-1;
         st.pop();
      }
        
      for(int i=0;i<nums2.size();i++)
      {
        cout<<nge[i]<<endl;
      }
      
      cout<<endl;
      


      for(int i=0;i<nums2.size();i++)
      {
         if(nge[i]==-1)
         {
            // val.push_back(-1);
            val[i]=-1;
            cout<<-1<<endl;

         }
         else{

        //  val.push_back(nums2[nge[i]]);
        val[i]=nums2[nge[i]];
         cout<<nums2[nge[i]]<<endl;
         }

      }
      for(int i=0;i<nums2.size();i++)
      {
        cout<<val[i]<<endl;
      }
      
      cout<<endl;
      
      

      for(int i=0;i<nums1.size();i++)
      {
         // auto itr = find(nums2.begin(),nums2.end(),nums1[i]);
         // ans.push_back(val[itr]);
         for(int p=0;p<nums2.size();p++)
         {
            if(nums1[i]==nums2[p])
            {
            //    ans.push_back(val[p]);
            ans[i]=val[p];
               break;
            }
         }


      }


      for(int i=0;i<nums1.size();i++)
      {
        cout<<ans[i]<<endl;
      }
     




}
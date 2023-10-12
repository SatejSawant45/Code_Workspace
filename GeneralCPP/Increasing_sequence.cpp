#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;

    vector<int> nums(p); //Why nums(p)?? why not nums; 

    for(int i=0;i<p;i++)
    {
    cin>>nums[i];
    }


    //  int count = 0 ;

       

   
    // int temp_i= 0; int temp_j=0 ;int temp_k=0 , temp=0;


    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //         count =0;
    //         for(int j=i+1;j<nums.size();j++)
    //         {

    //             if(count==0)
    //             {
    //             temp_i = nums[i];
    //             temp_j = nums[j];
    //             }
    //             else
    //             {
    //                 temp_k=nums[j];
    //             }


    //             if((temp_i<temp_j) && count==0)
    //             {
    //                 count++;
    //                 cout<<temp_i<<" < "<<temp_j<<endl;
    //                 temp=temp_j;
    //             }
    //             else if((temp < temp_k) && count==1)
    //             {
    //                 count++;
    //                 cout<<temp<<" < "<<temp_k<<endl;
    //             }

            
    //             if(count>=2)
    //             {
    //                 cout<<"true"<<endl;
    //                 cout<<"count:-"<<count<<endl;
    //                 cout<<"i:-"<<i<<endl;
    //                 cout<<"j:-"<<j<<endl;
    //                 break;
    //             }
    //         }
            
    //     }
 
    //         cout<<"false"<<endl;




    int n= nums.size();

   if(n<3) return false;

       vector<int> rtmx(n);
       vector<int> ltmn(n);

       ltmn[0] = nums[0];         
         for(int i=1;i<nums.size();i++)
         {
            ltmn[i] = min(ltmn[i-1] , nums[i]);
         }
         //Printing left max array

         for(int i=0;i<n;i++)
         {
            cout<<ltmn[i]<<" ";
         }
         cout<<endl;
        
        rtmx[n-1]=nums[n-1];

        for(int i=nums.size()-2;i>=0;i--)
        {
            rtmx[i] = max(rtmx[i+1] , nums[i]);

        }
        //Printing right max array
        for(int i=0;i<n;i++)
         {
            cout<<rtmx[i]<<" ";
         }
         cout<<endl;
        

        int ct=0;

        for(int i=0;i<nums.size();i++)
        {
            if(ltmn[i] < nums[i]  && nums[i] < rtmx[i])
            {
                cout<<"True"<<endl;
                ct++; 

                break;
           }
        }
        cout<<ct<<endl;
        
        if(ct==0)
        {
        cout<<"False"<<endl;
        }
            

}

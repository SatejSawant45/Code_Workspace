#include<bits/stdc++.h>
using namespace std;


    int quickSelect(vector<int>& nums ,int k)
    {
        int pivot = nums[nums.size()-1];

        vector<int> left;
        vector<int> mid;
        vector<int> right;

    
    //  for (int num: nums) {
    //         if (num > pivot) {
    //             left.push_back(num);
    //         } else if (num < pivot) {
    //             right.push_back(num);
    //         } else {
    //             mid.push_back(num);
    //         }
    //       }
          
          // difference between for loops
          
           for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i]<pivot)
            {
                right.push_back(nums[i]);
            }
            else
            {
                mid.push_back(nums[i]);
            }
        }
         
   
        if( k <= left.size())
        {
            return quickSelect(left,k) ;
        }
        if(left.size()+right.size() < k)
        {
            return quickSelect(right,k-left.size()-mid.size());
        }

        return pivot;
    }

 int findKthLargest(vector<int>& nums, int k)
    {
       return quickSelect(nums,k);
        
    }

int main()
{
  vector<int> nums;
  int size;
  cin>>size;
  
  for(int i=0;i<size;i++)
  {
    int x;
    cin>>x;
    nums.push_back(x);
  }
  cout<<endl;
  int k;
  cin>>k;
  
  int ans = quickSelect(nums,k);
  cout<<ans;
}
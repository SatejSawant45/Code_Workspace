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
         

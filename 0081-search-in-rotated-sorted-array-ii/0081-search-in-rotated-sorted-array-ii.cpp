class Solution {
public:
    bool search(vector<int>& nums, int target) {
        long start=0,end=nums.size()-1;

        while (start<=end)
        {
            long mid=start+(end-start)/2;
            if(nums[mid]==target)
            return true;
            if(nums[start]==nums[mid] && nums[end]==nums[mid])
            {
                start++,end--;
                continue;
            }
            else if (nums[mid]>=nums[start])
            {
                if(nums[start]<=target && nums[mid]>=target)
                end=mid-1;
                else 
                start=mid+1;
            }
            else
            {
                if(nums[end]>=target && nums[mid]<=target)
                start=mid+1;
                else
                end=mid-1;
            }
            
        }
        return false;
    }
};
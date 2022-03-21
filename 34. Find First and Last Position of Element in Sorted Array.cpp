class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int len = nums.size();
        if(len==0)
        {
            return {-1,-1};
        }
        int start = 0;
        int end = len - 1;
        int first_pos = -1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            
            if(target == nums[mid])
            {
                first_pos = mid ;
                end = mid - 1;
            }
            else if(target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
                
        }
        int last_pos  = -1;
        start = 0;
        end = len -1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            
            if(target == nums[mid])
            {
                last_pos = mid ;
                start = mid + 1;
            }
            else if(target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
                
        }
        
        if(first_pos >= 0 && last_pos >= 0)
        {
            return {first_pos , last_pos};
        }
        return {-1,-1};
    }
};

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                return true;
            }
            return false;
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int len = nums.size();
        
        vector <int> arr(len);
        for(int i=0;i<len;i++)
        {
            int count = 0;
            int value = nums[i];
            
            int j ;
            for(j=0;j<len;j++)
            {
                if(nums[j]==value);
                else if(nums[j]<value)
                {
                    count++;
                }
                
            }
            arr[i] = count;
        }
        return arr;
    }
};

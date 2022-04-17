class Solution {
public:
    int numberOfDigits(int n)
    {
        int count = 0;
        while(n!=0)
        {
            
            count++;
            n = n/10;
            
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
       int len = nums.size();
        
        int count_digits = 0;
        
        for(int i = 0;i<len;i++)
        {
            int count = numberOfDigits(nums[i]);
            
            if(count%2==0)
            {
                count_digits++;
            }
            
        }
        
        return count_digits;
    }
};

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int length = nums.size();
        int upLength = 2*length;
        vector <int> nums2(upLength);
        int k=0;
        for(int i=0;i<upLength;i++)
        {
            nums2[i] = nums[k];
            
            if(k==length-1)
            {
                k=-1;
            }
            k++;
        }
        return nums2;
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int count = 0, temp;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                temp = nums[count];
                nums[count] = nums[i];
                nums[i] = temp;
                count++;
            }
        }
        return count;
    }
};

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> total(nums.size());
        total[0] = nums[0];
        for(int i = 1; i < nums.size();i++)
        {
            total[i] = nums[i] + total[i-1];
        }
        
        return total;
    }
};
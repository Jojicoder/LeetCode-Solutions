class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> total;
        int ans = nums[0];
        total.push_back(ans);
        for(int i=0;i<nums.size()-1;i++){
            ans += nums[i+1];
            total.push_back(ans);
        }

        return total;
    }
};
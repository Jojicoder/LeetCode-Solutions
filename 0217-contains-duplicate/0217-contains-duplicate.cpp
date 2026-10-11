class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <2)
            return false;

        sort(nums.begin(), nums.end());
        int dup = nums[0];

        for(int i = 1; i < nums.size();i++)
        {
            if(dup == nums[i])
                return true;

            dup = nums[i];
        }

        return false;
    }
};
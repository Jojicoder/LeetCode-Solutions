class Solution {
public:
    int missingNumber(vector<int>& nums) {

       int total = 0;
       int ans = 0;

        for(int i =0; i < nums.size();i++)
        {
            ans += i+1;
            total += nums[i];
        }

        return ans - total;
    }   
};
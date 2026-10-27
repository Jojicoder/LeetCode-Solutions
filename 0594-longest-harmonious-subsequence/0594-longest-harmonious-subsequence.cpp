class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int prevCount = 0;
        int maxLen = 0;

        for(int i = 0; i < nums.size();i++)
        {
            if(i+1< nums.size() && nums[i] == nums[i+1])
            {
                count++;
            }else{
                if(i+1 < nums.size() && nums[i+1] - nums[i] == 1)
                {
                    prevCount = count;
                    count = 1;
                }else
                {
                    count =1;
                    prevCount = 0;
                }
            }

            if(prevCount > 0)
            {
                maxLen = max(maxLen,count + prevCount);
            }
        }
        return maxLen;
    }
};
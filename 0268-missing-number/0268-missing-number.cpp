class Solution {
public:
    int missingNumber(vector<int>& nums) {

        for(int i =0; i <= nums.size();i++)
        {
            if(std::ranges::find(nums,i)==nums.end())
            {
                return i;
            }
        }

        return -1;
    }   
};
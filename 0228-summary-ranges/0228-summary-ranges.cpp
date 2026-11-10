
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       
       vector<string> result;

       if(nums.empty())
       {
        return result;
       }
       int hold = nums[0];

       for(int i = 1 ; i < nums.size();i++)
       {
        if((long long)nums[i] - nums[i-1] !=1) 
        {
            if (hold == nums[i-1]) {
            result.push_back(to_string(hold));
            } else {
            result.push_back(to_string(hold) + "->" + to_string(nums[i-1]));
            }

            hold = nums[i];
        }
       }
       
       if(hold == nums[nums.size()-1])
       {
        result.push_back(to_string(hold));
       }else{
        result.push_back(to_string(hold) + "->" + to_string(nums.back()));
       }

       return result;
    }
};

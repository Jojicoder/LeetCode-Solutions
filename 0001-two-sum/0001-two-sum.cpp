
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
     unordered_map<int,int> mp;

     for(int i = 0; i<nums.size();i++)
     {
        int find = target - nums[i]; 
        if(mp.contains(find)){
            return {mp[find],i};
        }
        mp[nums[i]] = i;
     }

     return {};
    }
};
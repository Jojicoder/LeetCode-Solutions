class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> s;
        int result;

        for(int n:nums){
                s[n]++;
        }
        
        for (const auto& [key, val] : s) {
        if (val == 1) {
            return key;
        }
    }


        return result;
    }
};
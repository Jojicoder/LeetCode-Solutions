class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        int total = 0;
       for(int i = 0;i<nums.size();i++) {
        for(int j = i+1;j<nums.size();j++){
        ans = nums[i] - nums[j];
        if(k == abs(ans))
        {
            total++;
        }
        }
       
        }
        if(total > 0){
            return total;
        }
        else
        return 0;
        
    }
};
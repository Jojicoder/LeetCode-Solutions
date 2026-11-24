class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int left =0;
        for(int n:nums){
            total += n;
        }
        
        for(int i = 0; i < nums.size();i++){
            int right = total - nums[i] - left;

            if(right == left)
                return i;
            
            left += nums[i];
        }
        return -1;
    }
};
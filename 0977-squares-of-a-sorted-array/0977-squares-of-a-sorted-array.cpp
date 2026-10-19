class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left = 0;
        int right = static_cast<int>(nums.size())-1;
        int k = right;
        vector<int> result(nums.size());
       
        while(left<=right)
        {
            if(nums[left] *nums[left] > nums[right]*nums[right])
            {
                result[k] = nums[left]*nums[left];
                left++;
                k--;
            }
            else
            {
                result[k] = nums[right]*nums[right];
                right--;
                k--;
            }
        }

       

        return result;
    }
};
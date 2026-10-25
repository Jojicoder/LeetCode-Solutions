class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int k = nums.size()-1;
        vector<int> A(nums.size());

        while(left <= right)
        {
            if(nums[left]*nums[left] < nums[right]*nums[right])
            {
                A[k] = nums[right]*nums[right];
                k--;
                right--;
            }else{
                A[k] = nums[left]*nums[left];
                left++;
                k--;
            }

        }

        return A;
    }

};
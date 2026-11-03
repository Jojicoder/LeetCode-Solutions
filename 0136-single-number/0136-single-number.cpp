class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
      int total =0;
      for(int n:nums){
        total ^=n;
      }

      return total;
      }
};
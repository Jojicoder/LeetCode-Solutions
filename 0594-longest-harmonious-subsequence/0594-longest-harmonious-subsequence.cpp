class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 1;
        int prevCount = 0;
        int maxLen = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                // 直前の数字と今の数字の差が1なら
                // 直前のグループの個数を引き継ぐ
               if(nums[i] - nums[i-1]==1)
               {
                prevCount = count;;
               }
               else
               {
                prevCount =0;
               }

               count = 1;
            }

            // 差が1のグループが存在する場合のみ更新
            if (prevCount > 0) {
                maxLen = max(maxLen, prevCount + count);
            }
        }

        return maxLen;
    }
};
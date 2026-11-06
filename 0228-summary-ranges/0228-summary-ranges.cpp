
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;

        if (nums.empty()) {
            return result;
        }

        int hold = nums[0];

        for (int i = 1; i < nums.size(); i++) {
           if ((long long)nums[i] - nums[i - 1] != 1){

                if (hold == nums[i - 1]) {
                    result.push_back(to_string(hold));
                } else {
                    string range = to_string(hold) + "->" + to_string(nums[i - 1]);
                    result.push_back(range);
                }

                hold = nums[i];
            }
        }

        // 最後の範囲を追加
        if (hold == nums.back()) {
            result.push_back(to_string(hold));
        } else {
            string range = to_string(hold) + "->" + to_string(nums.back());
            result.push_back(range);
        }

        return result;
    }
};

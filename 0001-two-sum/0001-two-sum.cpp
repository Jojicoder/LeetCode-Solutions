#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // キー：数字の値、値：そのインデックス
        std::unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // 必要な相手の数字

            // 相手がマップに存在するか確認 (.count() はキーがあれば1、なければ0を返す)
            if (map.count(complement)) {
                // 見つかった場合、{相手のインデックス, 現在のインデックス} を返す
                return {map[complement], i};
            }

            // 現在の数字とインデックスをマップに登録
            map[nums[i]] = i;
        }

        // 解が見つからなかった場合は空のベクターを返す
        return {};
    }
};
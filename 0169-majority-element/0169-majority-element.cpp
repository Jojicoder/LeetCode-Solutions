class Solution {
public:
    int majorityElement(vector<int>& nums) {

       map<int,int> mp;

        for(int n : nums)
        {
            mp[n]++;
        }

    auto max_it = std::max_element(
    mp.begin(), mp.end(),
    [](const auto& a, const auto& b) {
        return a.second < b.second; // 「値(second)」の大きさを比較
    });
    return max_it->first;
    }
};


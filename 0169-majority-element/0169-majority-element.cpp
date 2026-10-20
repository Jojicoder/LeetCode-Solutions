class Solution {
public:
    int majorityElement(vector<int>& nums) {

       map<int,int> mp;

        for(int n : nums)
        {
            mp[n]++;
        }

    auto max_it = max_element(
    mp.begin(), mp.end(),
    [](const auto& a, const auto& b)
    {
        return a.second < b.second;
    });
    return max_it->first;
    }
};


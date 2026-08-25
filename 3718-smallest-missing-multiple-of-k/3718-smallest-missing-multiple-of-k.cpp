class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen;

        for(int n : nums)
        {
            seen.insert(n);
        }

        int multiple = k;

        while(true)
        {
            if(!seen.count(multiple))
            {
                return multiple;
            }
            multiple +=k;
        }
    }
};
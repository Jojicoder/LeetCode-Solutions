class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int pre1 = cost[0];
        int pre2 = cost[1];

        for(int i = 2;i < cost.size();i++){
            int curr = cost[i]+min(pre1,pre2);
            pre1 = pre2;
            pre2 = curr;
        }

        return min(pre1,pre2);
    }
};
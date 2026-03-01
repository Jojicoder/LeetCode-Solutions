class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;

        int pre1=2;
        int pre2=1;
        int curr;
        for(int i=2;i < n;i++){
             curr = pre1+pre2;
             pre2 = pre1;
             pre1 = curr;
        }
        
       return curr;
    }
};
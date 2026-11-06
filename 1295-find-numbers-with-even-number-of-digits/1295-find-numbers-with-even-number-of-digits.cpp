class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int check =0;
        
        for(int i = 0; i< nums.size();i++){
            int n = nums[i];
            check = 0;
            while(n > 0)
            {
                
                n /= 10;
                check++;
            }
            if(n/10 <= 0&&check%2==0)
                {
                    count++;
                }
        }
        return count;
    }
};
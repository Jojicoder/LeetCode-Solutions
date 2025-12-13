class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;

        int ori = x;
        long check = 0;

        while(x>0){
            int di = x % 10;
            check = di + 10 * check;
            x /= 10; 
        }
        if (ori == check) {
            return true;
        } else {
            return false;
        }
    }
};
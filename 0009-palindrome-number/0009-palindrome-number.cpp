class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;

        
        string s = to_string(x);
        string check = s;
        int n = s.length();
       
        string reversed5 = s;
        for(int i =0; i< n/2;i++){
            swap(check[i],check[n-i-1]);
        }

        // ヒント4: 元の s と reversedS が同じなら true, 違えば false
        if (s == check) {
            return true;
        } else {
            return false;
        }
    }
};
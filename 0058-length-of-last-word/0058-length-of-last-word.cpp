class Solution {
public:
    int lengthOfLastWord(string s) {
       int count = 0;
       for(int i = s.size()-1; 0 <= i;i--)
       {
        if(s[i] != ' ')
        {
            count++;
        }

        if(0 < count&&s[i] == ' ')
        {
            return count;
        }
       }

       return count;
    }
};
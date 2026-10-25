class Solution {
public:
    bool isIsomorphic(string s, string t) {

        
    char ch1[256] = {0};
        char ch2[256] = {0};

        for(int i = 0; i < s.size();i++)
        {
            if(ch1[s[i]] != ch2[t[i]])
            {
                return false;
            }

            ch1[s[i]]= i+1;
            ch2[t[i]] = i+1;
        }

        return true;
    }

};
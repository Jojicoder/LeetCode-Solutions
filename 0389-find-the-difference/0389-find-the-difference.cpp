class Solution {
public:
    char findTheDifference(string s, string t) {
     

     for(int i = 0; i < s.size();i++)
     {  
        size_t pos = t.find(s[i]);
        if (pos != std::string::npos) // 見つかったら
        {
            t.erase(pos,1);
        }
     }
     return t[0];
    }
};
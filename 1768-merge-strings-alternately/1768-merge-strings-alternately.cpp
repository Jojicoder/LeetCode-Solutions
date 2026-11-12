class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int w1 = 0;
        int w2 = 0;

        if(word1.size() ==0&& 0== word2.size())
        return ans;

        while(w1 < word1.size() && w2 < word2.size()){

            ans += word1[w1];
            ans += word2[w2];
            w1++;
            w2++;
        }

        if(w1 < word1.size())
        {
            while(w1 < word1.size()){
            ans += word1[w1];
            w1++;}
        }else if(w2 < word2.size()){
           
           while(w2 < word2.size()){
                ans += word2[w2];
            w2++;
           } 
        }
           return ans;
    }
};
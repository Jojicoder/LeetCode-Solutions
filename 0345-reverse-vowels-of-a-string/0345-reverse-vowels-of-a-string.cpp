class Solution {
public:

    bool isVowel(char c){
        c = tolower(c);

        return c == 'a'||c=='e'|| c == 'i'||c=='o'||c=='u';
    }

    string reverseVowels(string s) {
        int k1 = 0;
        int k2 = s.size()-1;

        while(k1<k2)
        {
            
            if(!isVowel(s[k1]))
            {
                k1++;
            }
            else if(!isVowel(s[k2]))
            {
                k2--;
            }else
            {
                swap(s[k1],s[k2]);
                k1++;
                k2--;
            }
        }

        return s;
    }
};
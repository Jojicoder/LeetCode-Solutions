class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    

    for(char ch:magazine){
     size_t pos = ransomNote.find(ch);
    // 2. 見つかったら（npos でなければ）1文字削除
    if (pos != std::string::npos) {
        ransomNote.erase(pos, 1); // pos の位置から 1文字 削除
    }

    if(ransomNote.empty())
        {
            return true;
        }
    
    }
    return false;
    }
};
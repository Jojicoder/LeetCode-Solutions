//Add Contains Duplicate solution using C++ unordered_set

class Solution {
public:
    bool isAnagram(string s, string t) {
        // 0. 長さが違ったら、絶対にアナグラムにはならないので即 false
        if (s.length() != t.length()) {
            return false;
        }

        // 1. <文字, その個数> を記録するマップを作る
        unordered_map<char, int> count;

        // 2. 文字列 s の文字をカウントする（プラス）
        for (char c : s) {
            count[c]++; 
            // ↑ マップに無ければ自動で 0 を作ってから +1 してくれます
        }

        // 3. 文字列 t の文字を減らしていく（マイナス）
        for (char c : t) {
            count[c]--;

            // もし引いた結果、マイナスになったら「s に無かった（または足りない）」ということ
            if (count[c] < 0) {
                return false;
            }
        }

        // 4. 最後までマイナスにならずに通れば合格
        return true;
    }
};
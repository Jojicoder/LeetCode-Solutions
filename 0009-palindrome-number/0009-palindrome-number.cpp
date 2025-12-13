class Solution {
public:
    bool isPalindrome(int x) {
        // ヒント1: マイナスの数は絶対に回文になりません
        if (x < 0) {
            return false;
        }

        // ヒント2: 整数 x を文字列に変換する
        // C++では to_string(x) という便利な魔法があります
        string s = to_string(x);

        // ヒント3: 文字列 s をひっくり返した新しい文字列 reversedS を作る
        // reverse関数を使うか、自分でfor文で作ってみよう
        string reversedS = s;
        reverse(reversedS.begin(), reversedS.end());

        // ヒント4: 元の s と reversedS が同じなら true, 違えば false
        if (s == reversedS) {
            return true;
        } else {
            return false;
        }
    }
};
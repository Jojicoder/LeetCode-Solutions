class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // 1. スタック（箱）を作る

        for (char c : s) {
            // もし「開きカッコ」なら
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); // 2. 箱に入れる (Push)
            } 
            // もし「閉じカッコ」なら
            else {
                // チェックA：箱が空っぽだったら？（相手がいない！）
                if (st.empty()) {
                    return false; // 即アウト
                }

                // チェックB：箱の一番上の文字を取り出して確認
                char topChar = st.top();

                // 今の文字(c) と 箱の上(topChar) がペアになってるか確認
                if ((c == ')' && topChar == '(') || 
                    (c == '}' && topChar == '{') || 
                    (c == ']' && topChar == '[')) {
                    
                    st.pop(); // 3. ペア成立！箱から捨てる (Pop)

                } else {
                    return false; // 形が違う（例: ( と ] ）のでアウト
                }
            }
        }

        // 4. 全部終わった後、箱が空っぽなら成功！(true)
        //    何かが残ってたら失敗 (false)
        return st.empty();
    }
};
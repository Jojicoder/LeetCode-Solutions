class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 空の配列が来た場合のガード（これがないとエラーになる可能性があります）
        if (nums.empty()) {
            return 0;
        }

        // k は「書き込み役（建築家）」のポインタ
        // 最初の要素(index 0)は絶対にユニークなので、index 1 から書き込みを始めます
        int k = 1;

        // i は「読み込み役（スカウト）」のポインタ
        // 1番目からスタートして、前の数字と比較していきます
        for (int i = 1; i < nums.size(); i++) {
            
            // 「今の数字」と「一つ前の数字」が違う場合 ＝ 新しいユニークな数字を発見！
            if (nums[i] != nums[i - 1]) {
                
                // 書き込み役(k)の場所に、発見した数字(i)をコピーする
                nums[k] = nums[i];
                
                // 次の書き込み場所へ移動する
                k++;
            }
        }

        // 最終的に k がユニークな要素の数になっています
        return k;
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> rowOccurences, columnOccurences, subMatrixOccurences;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                int num = board[i][j] - '0', subMatrixIdx = ((i / 3)  * 3) + (j / 3);
                if(rowOccurences[i].count(num)) return false;
                if(columnOccurences[j].count(num)) return false;
                if(subMatrixOccurences[subMatrixIdx].count(num)) return false;
                rowOccurences[i].insert(num);
                columnOccurences[j].insert(num);
                subMatrixOccurences[subMatrixIdx].insert(num);
            }
        }
        return true;
    }
};

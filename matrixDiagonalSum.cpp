class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int size = mat.size();
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                if (i == j) {
                    sum += mat.at(i).at(j);
                }

                else if ((i+j)==size-1) {
                    sum += mat.at(i).at(j);
                }
            }
        }
        return sum;
    }
};

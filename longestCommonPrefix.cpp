class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";

        if (strs.size() == 1) {
            return strs[0];
        }

        size_t j=0;

        for (size_t i=0; i<strs[j].length(); i++) {
            j=0;
            bool yeah;
            while (j<strs.size()-1) {
                if (strs[j][i] == strs[j+1][i]) {
                    yeah = true;
                }

                else {
                    yeah = false;
                    break;
                }

                j++;
            }

            if (yeah) {
                common += strs[j][i];
            }

            else {
                break;
            }
        }
        return common;
    }
};

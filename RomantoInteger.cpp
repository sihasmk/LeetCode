class Solution {
public:
    int romanToInt(string s) {
    int sum = 0;
    int len = s.length();
    unordered_map <char, int> roman{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    
    for (int i=0; i<len; i++) {
        if (i<=len-2) {
            if (roman.at(s[i]) < roman.at(s[i+1])) {
                sum += roman.at(s[i+1]) - roman.at(s[i]);
                i++;
            }

            else {
                sum += roman.at(s[i]);
            }
        }

        else {
            sum += roman.at(s[i]);
        }
    }
    return sum;
    }
};

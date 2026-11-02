class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans(10);

        
        while (ss >> word) {
            int pos = word.back() - '0';
            word.pop_back();
            ans[pos] = word;
        }
        string result = "";
        for (int i = 1; i <= 9; i++) {
            if (!ans[i].empty()) {
                if (!result.empty()) result += " ";
                result += ans[i];
            }
        }

        return result;
    }
};

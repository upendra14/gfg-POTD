class Solution{
  public:
 string result(string s, int r, int n) {
        int m = s.size();
        string res = s;

        while (r > 0) {
            vector<string> ans;
            for (int i = 0; i < m; i++) {
                if (res[i] == '1')
                    ans.push_back("10");
                else
                    ans.push_back("01");
            }
            res = "";
            for (int i = 0; i < ans.size(); i++) {
                res += ans[i];
            }
            r--;
        }
        return res;
    }
    
    char nthCharacter(string s, int r, int n) {
        string res = result(s, r, n);
        // cout << res << endl;
        return res[n];
    }
};

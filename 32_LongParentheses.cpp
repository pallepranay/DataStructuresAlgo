class Solution {
public:
int getMaxValid(string &s) {
    int mx = 0, c = 0, cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ')')
            c++;
        else {
            if (c)cnt++;
            c--;
            if (c < 0)
                cnt = c = 0;
        }
        mx = max(cnt, mx);
    }
    return mx;
}

int longestValidParentheses(string s) {

    vector<string> strs;
    int c = 0;
    strs.push_back("");
    for (int i = 0; s[i]; ++i) {
        if (s[i] == '(')c++;
        else c--;
        if (c >= 0)
            strs.back().push_back(s[i]);

        else if (strs.back() != "")
            strs.push_back("");
        c = max(c, 0);
    }
    int mx=0;
    for (auto str: strs)
        mx=max(mx, getMaxValid(str));
    return mx*2;
}
};

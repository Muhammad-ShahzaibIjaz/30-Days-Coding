string longestPalindrome(string s) {
    int n = s.length();
    bool dp[n][n];
    memset(dp, false, sizeof(dp));
    int start = 0, end = 0;
    for(int i = n-1; i >= 0; i--) {
        for(int j = i; j < n; j++) {
            if(s[i] == s[j] && (j-i < 2 || dp[i+1][j-1])) {
                dp[i][j] = true;
                if(j-i > end-start) {
                    start = i;
                    end = j;
                }
            }
        }
    }
    return s.substr(start, end-start+1);
}
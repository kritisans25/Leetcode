class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int l = 0;
        int count = 0;

        string ans = "";
        int minLen = INT_MAX;

        for(int r = 0; r < s.length(); r++) {

            if(s[r] == '1') {
                count++;
            }

            while(count > k) {

                if(s[l] == '1') {
                    count--;
                }

                l++;
            }

            if(count == k) {

                while(s[l] == '0') {
                    l++;
                }

                int len = r - l + 1;
                string current = s.substr(l, len);

                if(len < minLen) {
                    minLen = len;
                    ans = current;
                }
                else if(len == minLen && current < ans) {
                    ans = current;
                }
            }
        }

        return ans;
    }
};
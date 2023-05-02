class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.size(), m = p.size(), k = 0;
        int mp[26] = {0}, l = 0, r = 0;
        for (auto i : p)
            if (mp[i - 'a']++ == 0)
                k++;
        while (l <= r && r < n) {
            while (r < n && r - l < m) {
                if (mp[s[r++] - 'a']-- == 1)
                    k--;
            }
            if (k == 0)
                res.push_back(l);
            if (mp[s[l++] - 'a']++ == 0)
                k++;
        }
        return res;
    }
};
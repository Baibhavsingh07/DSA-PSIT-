class Solution{
public:
	int search(string pat, string txt) {

    // code here

    map<char, int> mpp, target;

    for (auto i : pat) {
    target[i]++;}

    int k = pat.size();

    for (int i = 0; i < k - 1; ++i) {
    mpp[txt[i]]++;}

    int n = txt.size(), ans = 0;

    for (int i = k - 1; i < n; ++i) {
    char c = txt[i];
        mpp[c]++;
        int f = 0;
        for (auto i : target) {
            if (mpp[i.first] < i.second) {
                f = 1;
                    break;}
                }

        if (!f) ans++;

        mpp[txt[i - k + 1]]--;

    }

    return ans;

}

};

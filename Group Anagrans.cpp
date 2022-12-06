class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       vector<vector<string>>res;
        unordered_map<string, vector<string>>m;
        
        for(int i = 0;i<strs.size();i++)
        {
            string s= strs[i];
            sort(strs[i].begin(),strs[i].end());
            cout<<s<<endl;
            m[strs[i]].push_back(s);
            
        }
                
        for(auto i : m)
        {
            res.push_back(i.second);
        }

        return res;
        
    }
};
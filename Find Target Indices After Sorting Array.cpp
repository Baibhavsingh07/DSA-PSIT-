class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int t) {          
        sort(a.begin(),a.end());
        int i,c=0;
        vector<int> v;

        for(i=0;i<a.size();i++)
        {
            if(a[i]==t)
            {
                v.push_back(i);
            }
        }
        return v;
        
    }
};

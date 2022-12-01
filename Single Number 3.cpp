class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {          //Time complexity : O(n)
                                                        //Space Complexity : O(n)
        unordered_map<int,int> m;
        int i,j,k,c=0;
        int n=a.size();
        for(i=0;i<n;i++)
            m[a[i]]++;

        vector<int> v;

        for(auto k: m)
        {
            if(k.second==1)
            v.push_back(k.first);
            
        }
        return v;
        
    }
};
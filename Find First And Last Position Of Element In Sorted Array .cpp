class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int l=0,h=a.size()-1,m,ind=-1;
        int i=0,j=a.size()-1,n=a.size();
        int ifs=-1;int ifl=-1;
        vector<int> v;

        for(i=0;i<n;i++)
        {
            if(a[i]==t){
            ifs=i;
            break;}

        }
        v.push_back(ifs);

        for(i=n-1;i>=0;i--)
        {
            if(a[i]==t){
            ifl=i;
            break;}

        }
        v.push_back(ifl);
        
        return v;
        
        
    }
};

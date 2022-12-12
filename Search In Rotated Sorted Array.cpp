class Solution {
public:
    int search(vector<int>& n, int t) {
        int l=0,h=n.size()-1,m;
        int i,j,ind=-1;

        for(i=0;i<n.size();i++)
        {
            if(n[i]==t){
            ind=i;break;
            }
        }
        return ind;
        
    }
};

class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int m,l=0,h=a.size()-1,n=a.size(),i,j,k;
        if(n==1)
        return 0;
        
        if(a[0]>a[1])
        return 0;
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] and a[i]>a[i+1])
            return i;
        }
        if(a[n-1]>a[n-2])
        return n-1;

        return -1;
        
    }
};

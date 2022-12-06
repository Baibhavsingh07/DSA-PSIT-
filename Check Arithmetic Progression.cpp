//in c++
class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr,arr+n);
        int i,j,d=0;
        if(n<=1)
        return 1;
        
        int m=arr[1]-arr[0];
    
        for(i=1;i<n-1;i++)
        {
            d=arr[i+1]-arr[i];
            if(d!=m)
            return 0;
            
        }
        return 1;
        
    }

};


//in Java

class Solution {
    public boolean canMakeArithmeticProgression(int[] a) {
        int i,j,k,c=0,d=0;
        Arrays.sort(a);
        
        d=a[1]-a[0];
        
        for(i=1;i<a.length-1;i++)
        {
            if(a[i+1]-a[i]!=d)
            return false;
        }
        return true;
        
    }
}

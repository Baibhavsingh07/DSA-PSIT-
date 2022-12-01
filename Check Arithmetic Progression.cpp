
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
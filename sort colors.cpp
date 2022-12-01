class Solution {
public:                                             //sorry i mistakenly put 29 nov date on google form but i 
                                                    //    had submitted it on 1 dec
void sortColors(vector<int>& a) {                           
                                                                //Time Complexity : O(n)
                                                                //Space Complexity : O(1)
        int i,j,k,c=0,n=a.size();
        i=j=0;          
        k=n-1;
        while(j<=k)
        {
            if(a[j]==2)
            {
                c=a[k];
                a[k]=a[j];                                                             
                a[j]=c;
                k--;
            }
            else if(a[j]==0)
            {
                c=a[j];
                a[j]=a[i];
                a[i]=c;
                j++;
                i++;
            }
            else
                j++;
        }
             
    }
};
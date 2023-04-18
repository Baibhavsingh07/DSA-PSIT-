class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a ) {
        stack<int> st;
        int n=a.size();
        int i,j,m=0;
        vector<int> v(n);

        for(i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=a[i])
            {
                st.pop();
            }
            st.push(a[i]);
        }

        for(i=n-1;i>=0;i--)
        {
           
            while(!st.empty() && st.top()<=a[i])
            {
                st.pop();
            }

            if(st.empty()){
            v[i]=-1;
            
            }
            else
            v[i]=st.top();

            st.push(a[i]);
        }
        
        return v;

    }
};

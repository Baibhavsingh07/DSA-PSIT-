class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int i,j,k,c=0,m=0,p=0;       
        int n=a.size();
        stack<int> st;
        stack<int> st1;

        vector<int> v(n);
        vector<int> s(n);
        
        //NSER
        for(i=n-1;i>=0;i--)
        {
            
            while(!st.empty() && a[st.top()]>=a[i])
            {
                st.pop();
            }

            if(st.empty()){
            v[i]=n;
            
            }
            else
            v[i]=(st.top());

            st.push(i);
        }
        
        // NSEl
        for(i=0;i<n;i++)
        {
            
            while(!st1.empty() && a[st1.top()]>=a[i])
            {
                st1.pop();
            }

            if(st1.empty()){
            s[i]=-1;
            
            }
            else
            s[i]=(st1.top());

            st1.push(i);
        }

        for(i=0;i<n;i++){
            int area=(v[i]-s[i]-1)*a[i];
            m=max(m,area);
        }

        return m;
        
        
    }
};

/*
class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int i,j,k,c=0,m=0,p=0;       
        int n=a.size();
        stack<int> st;
        stack<int> st1;

        vector<int> v(n);
        vector<int> s(n);
        
        //NSER
        for(i=n-1;i>=0;i--)
        {
            
            while(!st.empty() && a[st.top()]>=a[i])
            {
                st.pop();
            }

            if(st.empty()){
            v[i]=n;
            
            }
            else
            v[i]=(st.top());

            st.push(i);
        }
        
        // NSEl
        for(i=0;i<n;i++)
        {
            
            while(!st1.empty() && a[st1.top()]>=a[i])
            {
                st1.pop();
            }

            if(st1.empty()){
            s[i]=-1;
            
            }
            else
            s[i]=(st1.top());

            st1.push(i);
        }

        for(i=0;i<n;i++)
        {
            int area=(v[i]-s[i]-1 )* a[i];
            m=max(m,area);
        }
        return m;
        
        
    }
};

*/

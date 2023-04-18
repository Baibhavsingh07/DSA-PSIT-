class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        set<char> se;
        unordered_map<char,int> map;
        int i,j,k,c=0,n=s.size();

        for(i=0;i<n;i++)
        {
            
            map[s[i]]=i;
        }
        int p=0;

        for(i=0;i<n;i++)
        {
            while((!st.empty()) and (s[i]<st.top()) and (map[st.top()]>i)and (se.find(s[i])==se.end()) )
            {
                char d=st.top();
                se.erase(d);
                st.pop();
                
            }
            p=se.size();
            se.insert(s[i]);
            
            if(se.size()>p)
            st.push(s[i]);
            
           

        }

        string a="";
        while(!st.empty())
        {
            
            a=st.top()+a;
            st.pop();
        }
        return a;
        
    }
};

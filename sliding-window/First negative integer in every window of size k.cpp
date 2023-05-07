vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
    long long i,j,c=0,s=0;
    queue<long long>q;
    vector<long long>v;
    
    for(i=0;i<k;i++){
        if(a[i]<0)
        q.push(a[i]);
    }
    
    for(i=k;i<n;i++){
        if(!q.empty()){
            v.push_back(q.front());
        } else{
            v.push_back(0);
        }
        if(a[i-k]<0)
        q.pop();
        if(a[i]<0)
        q.push(a[i]);
    }
    if(!q.empty())
    v.push_back(q.front());
    else
    v.push_back(0);
    return v;
                                                 
                                                 
 }

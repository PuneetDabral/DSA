 stack<int>s;
    for(int i=0; i<n; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    //step 2 fatch from stack and push in que
    while(!s.empty()){
        int val=s.top();
        s.pop();
        s.push(val);
    }
    
    //step 3 fatch first(n-k) element from que
    
    int t =q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
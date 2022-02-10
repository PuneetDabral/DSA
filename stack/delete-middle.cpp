void solve(stack<int>&inputStack,int count, int n){
    //base case
    if(count==n/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    
    solve(inputStack,count+1,n);
    inputStack.push(num);
    
}




void deleteMiddle(stack<int>&inputStack, int N){
	
    int count =0;
    solve(inputStack,count,N);
   
}
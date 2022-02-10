void insertAtbottom(stack<int> &s,int ele){
      if(s.empty()){
          s.push(ele);
          return ;
    }
    int num =s.top();
    s.pop();
    //recursive call
   insertAtbottom(s,ele);
    s.push(num);
    
}
//tc-o(n2)




void reverseStack(stack<int> &stack) {
    //base case 
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();
    //recursive call
    reverseStack(stack);
    
    insertAtbottom(stack, num);
    
}
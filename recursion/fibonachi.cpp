class Solution {
public:
    int fib(int n) {
       // base  case
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        
        int ans = fib(n-1)+fib(n-2);
        return ans;
//         int t1=0,t2=1,nterm;
        
//       for(int i=1; i<=n; i++){
//           if(i==0){
//               return t1;
//           }
//           if(i==1){
//               return t2;
//           }
          
//           nterm=t1+t2;
//           t1=t2;
//           t2=nterm;
          
//       }
//         return nterm;
    }  
};
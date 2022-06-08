int maximumFrequency(vector<int> &arr, int n)
{
   unordered_map<int,int>count;
    int maxfrq=0;
    int maxans =0;
    
    for(int i=0; i<arr.size(); i++){
        count[arr[i]]++;
        maxfrq =max(maxfrq,count[arr[i]]);
        
    }
     for(int i=0; i<arr.size(); i++){
         if(maxfrq == count[arr[i]]){
             maxans =arr[i];
             break;
         }
     }
    return maxans;
    
}
#include<iostream>
using namespace std;
#include<queue>

class heap{
public:
int arr[100];
int size;

heap(){
    arr[0]=-1;
    size =0;
}

void insert(int val){
    size = size+1;
    int index = size;
    arr[index]=val;
//take node to its right position 
//check from last node 
    while(index>1){
        int parent = index/2;  
        
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }else{
            return;
        }
    }
}
void print(){
    for(int i=1; i<=size; i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
}

void deletefromHeap( ){
    if(size==0){
        cout<<"nothing to delete";
        return ;
    }
    //step 1 put last element into last two 
    arr[1]=arr[size];
    // step 3: remove last eelment 
    size--;

    //step 3 :take root node to its correct position 
    int i=1;
    while(i<size){
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;

        if(leftIndex <size && arr[i] < arr[leftIndex]) {
            swap(arr[i],arr[leftIndex]);
            i=leftIndex;
        }
        else if(rightIndex <size && arr[i] < arr[rightIndex]){
            swap(arr[i],arr[rightIndex]);
            i=rightIndex;
        }
        else{
            return ;
        }
    }

}


};

void heapify(int arr[],int n , int i){
    int largest = i;
    int left =2*i;
    int right= 2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    

}

void heapsort(int arr[], int n){
    int size=n;
    while(1<size){
        //step 1swap
        swap(arr[size],arr[1]);
        //step 2
        size--;

        //step 3
        heapify(arr,size,1);
    }
}

int main(){
heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();
h.deletefromHeap();
h.print();


// --------------------------------------------------------------------
int arr[6]= {-1,54,53,55,52,51};
int n=5;
//heap creation
for(int i=n/2; i>0; i--){
    heapify(arr,n,i);
}
cout<<"printing the arrya now"<<endl;
for(int i=1; i<=n; i++){
    cout<<arr[i]<<" ";

}cout<<endl;

//heap sort
heapsort(arr,n);

cout<<"printing the arrya now"<<endl;
for(int i=1; i<=n; i++){
    cout<<arr[i]<<" ";

}
cout<<endl;

cout<<"using priourity que"<<endl;
//max heap
priority_queue<int>pq;
pq.push(1);
pq.push(10);
pq.push(15);
pq.push(14);
pq.push(13);

pq.pop();
cout<<pq.top();

//max heap
priority_queue<int,vector<int>,greater<int> > min_heap;




    return 0;
}

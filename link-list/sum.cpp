// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    Node *reverse(Node *head){
        Node *curr=head;
        Node *prev=NULL;
        Node *forword=NULL;
        
        while(curr!=NULL){
            forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
            
            
        }
        return prev;
    }
    void insertAttail(struct Node*&head,Node*&tail,int value){
       
       Node *temp = new Node(value);
        if(head==NULL){
            head=temp;
            tail=head;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
            
        }
    
        
    }
    
     struct Node* add(struct Node* first, struct Node* second){
         int carry=0;
         Node *anshead=NULL;
         Node *anstail=NULL;
         
         
         while(first!=NULL && second !=NULL){
             int sum = carry + first->data + second->data;
             int degit = sum%10;
           
             insertAttail(anshead,anstail,degit);
             carry=sum/10;
              first=first->next;
               second=second->next;
             
             
         }
           while(first!=NULL){
                 int sum = carry+first->data;
                  int degit = sum%10;
                   insertAttail(anshead,anstail,degit);
                    carry=sum/10;
                      first=first->next;
                 
             }
             
             while(second!=NULL){
                 int sum = carry+second->data;
                  int degit = sum%10;
                   insertAttail(anshead,anstail,degit);
                    carry=sum/10;
                     second=second->next;
                   
             
                 
             }
             while(carry!=0){
                    int sum = carry;
                  int degit = sum%10;
                   insertAttail(anshead,anstail,degit);
                    carry=sum/10;
                 
             }
             return anshead;
             
             
         
     }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // prev
        first= reverse(first);
        second=reverse(second);
        
        //step 2 add two link list
        Node *ans = add(first,second);
        //step 3
        ans=reverse(ans);
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * insertIntoBST(Node *root, int d)
{
      if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d > root->data){
        //right part
        root->right =insertIntoBST(root->right,d);
    }
    else{
        root->left= insertIntoBST(root->left,d);
    }
    return root;
   
}



void takeinput(Node *&root){
   int data;
    cin>>data;

    while(data != -1){
        root =  insertIntoBST(root,data);
        cin>>data;

    }
}


void levelOrderTraversal(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root){
//  (LNR) 
if(root == NULL){
    return ;

}
//in this traversal in bst the tree is sort 
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}

void preorder(Node *root){
    // NLR
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    //lRN
    if(root ==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node *minvalue(Node *root){
    Node *temp =root;
    while(temp->left!=NULL){
        temp = temp->left;

    }
    return temp;
}
Node *maxvalue(Node *root){
    Node *temp =root;
    while(temp->right!=NULL){
        temp = temp->right;

    }
    return temp;
}


Node *deleteFromBst(Node *root,int val){
if(root==NULL){
    return root;
}
if(root->data==val){
    //0 child
    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }


    //1child
    //left 
if(root->left!=NULL && root->right==NULL){
    Node * temp = root->left;
    delete root;
    return temp;

}

    //right
if(root->right!=NULL && root->left==NULL){
    Node * temp = root->right;
    delete root;
    return temp;
    
}


    //2 child

    if(root->left!=NULL && root->right!=NULL){
        int mini = minvalue(root->right)->data;
        root->data = mini;
        root->right = deleteFromBst(root->right,mini);
        return root;

    }

}
else if(root->data>val){
    //left aprt
root->left = deleteFromBst(root->left,val);
return root;
}
else{
    //rightpart
    root->right = deleteFromBst(root->right,val);
   return root;

}
}



int main()
{
    Node *root = NULL;
     cout<<"enter data to create BST"<<endl;
    takeinput(root);
    cout<<"printing"<<endl;
    // levelOrderTraversal(root);
    // inorder(root);
    // preorder(root);
    // postorder(root);
   cout<<maxvalue(root) ->data<<endl;
    cout<<minvalue(root) ->data;

    return 0;
}
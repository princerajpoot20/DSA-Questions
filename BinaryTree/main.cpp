//
//  main.cpp
//  BinaryTree
//
//  Created by Prince Rajpoot on 03/05/22.
//
#include<iostream>
#include <queue>
using namespace std;
template <typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    
    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

void printTree(BinaryTreeNode<int>* root){
    if(root==NULL)
        return;
    
    cout<<root->data<<": ";
    
    
    if(root->left!=NULL )
        cout<<"L "<<root->left->data;
    
    if(root->right!=NULL)
        cout<<" R "<<root->right->data;
    
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
    
}
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1)
        return NULL;
    
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*node1=takeInput();
    BinaryTreeNode<int>*node2=takeInput();
    root->left=node1;
    root->right=node2;
    
    return root;
}

BinaryTreeNode<int>* takeInputLevelWise(){
    cout<<"enter root data::";
    int rootdata;
    cin>>rootdata;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
    
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    
    while(q.size()!=0){
        BinaryTreeNode<int>* temp=q.front();
        q.pop();
        
        cout<<"Enter left and right  children of "<<temp->data<<"  . Enter -1 for NULL entry"<<endl;
        int x,y;
        cin>>x>>y;
        if(x!=-1){
            BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(x);
            temp->left=node1;
            q.push(node1);
            
        }
        if(y!=-1){
            BinaryTreeNode<int>* node2= new BinaryTreeNode<int>(y);
            temp->right=node2;
            q.push(node2);
        }
        
    }
    return root;
    
}

int countNodes(BinaryTreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    
    int currentNode=1;
    
    int leftCount=countNodes(root->left);
    int rightCount=countNodes(root->right);
    
    return currentNode+leftCount+rightCount;
}

void printInInorder(BinaryTreeNode<int>* root){
    if(root==NULL)
        return;
    
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    
    while(q.size()!=0){
        BinaryTreeNode<int>*temp=q.front();
        q.pop();
        if(temp!=NULL){
        cout<<temp->left->data<<" ";
        cout<<temp->data<<" ";
        cout<<temp->right->data<<endl;
    
            q.push(root->left);
            q.push(root->right);
        }
    
    }
}

int maximum(BinaryTreeNode<int>*root){
    if(root==NULL){
        return INT_MIN;
    }
    int n1=root->data;
    int n2=maximum(root->left);
    int n3=maximum(root->right);
    
    return max(n1,max(n2,n3));
    
}

int minimum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    
    int n1=root->data;
    int n2=minimum(root->left);
    int n3=minimum(root->right);
    
    return min(n1,min(n2,n3));
    
}

bool isBST(BinaryTreeNode<int>*root){
    
    if(root==NULL){
        return true;
    }
    
    int leftMax=maximum(root->left);
    int rightMin=minimum(root->right);
    
    bool output=(root->data>leftMax && root->data<=rightMin && isBST(root->left) && isBST(root->right));
    
    return output;
    
    
}



int main(){
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;
    BinaryTreeNode<int>* node3 = new BinaryTreeNode<int>(4);
    node2->right=node3;
    //printTree(root);
    
    BinaryTreeNode<int>* root1=takeInputLevelWise();
    printTree(root1);
    
    //cout<<countNodes(root1)<<endl;
    
    
}











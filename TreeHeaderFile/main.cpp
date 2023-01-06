//
//  main.cpp
//  TreeHeaderFile
//
//  Created by Prince Rajpoot on 29/04/22.
//
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename T>

class TreeNode{
public:
    
    T data;
    
    vector<TreeNode<T>*> children;

    TreeNode(T a){
        data=a;
    }
    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }
};

void printTree(TreeNode<int>* root){
    
    cout<<root->data<<":  ";
    
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;

    for(int i=0;i<root->children.size();i++){
        
        printTree(root->children[i]);
    }
 
    
}
TreeNode<int>* takeInput(){
    
    cout<<"Enter the data::"<<endl;
    int d;
    cin>>d;
    
    TreeNode<int>*root=new TreeNode<int>(d);
    cout<<"How many children do this have::"<<endl;
    cin>>d;
    for(int i=0;i<d;i++){
        TreeNode<int>*node1=new TreeNode<int>(0);
        node1=takeInput();
        
        root->children.push_back(node1);
        
    }
    return root;
}

TreeNode<int>* takeInputLevelWise(){
    cout<<"Enter the data of root::"<<endl;
    int d;
    cin>>d;
    TreeNode<int>* root=new TreeNode<int>(d);
    
    queue<TreeNode<int>*> q;
    q.push(root);
    
    while(q.size()!=0){
        TreeNode<int>* temp=q.front();
        q.pop();
        cout<<"enter number of children of "<<temp->data<<endl;
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++){
            cout<<"Enter data of "<<i+1<<" child"<<endl;
            int t;
            cin>>t;
            TreeNode<int>* node1=new TreeNode<int>(t);
            q.push(node1);
            temp->children.push_back(node1);
            
            
            
        }
        
    }
    
    return root;
}


void printTreeLevelWise(TreeNode<int>* root){
   // cout<<root->data<<":";
    
    queue<TreeNode<int>*>q;
    q.push(root);
    
    while(q.size()!=0){
        TreeNode<int>* temp=q.front();
        q.pop();
        cout<<temp->data<<": ";
        for(int i=0;i<temp->children.size();i++){
            
            cout<<temp->children[i]->data<<" ";
            q.push(temp->children[i]);
        }
        cout<<endl;
        
    }
    
    
}

int countNodes(TreeNode<int>*root){
    if(root->children.size()==0){
        return 1;
    }
    int sum=0;
    for(int i=0;i<root->children.size();i++){
        
        int temp=countNodes(root->children[i]);
        sum+=temp;
    }

    return sum+1;
}



TreeNode<int>* maxdata(TreeNode<int>* root){
    
    if(root->children.size()==0){
        return root;
    }
    TreeNode<int>* max=root;
    
    for(int i=0;i<root->children.size();i++){
        
        TreeNode<int>* temp=maxdata(root->children[i]);
        if(max->data<temp->data){
            max=temp;
        }
    }
    return max;
    
    
    
        
        
        //return node;
    
    
}




int getHeight(TreeNode<int>* root) {
        // Write your code here
        
        if(root->children.size()==0){
            return 1;
        }
        int max=0;
        
        for(int i=0;i<root->children.size();i++){
            int temp=getHeight(root->children[i]);
            if(max<temp){
                max=temp;
            }
        }
    return 1+max;
}



void printAtLevelK(TreeNode<int>*root,int k){
    if(root==NULL)
        return;
    
    
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i], k-1);
    }
    
    
}


void preOrderTraversal(TreeNode<int>* root){
    if(root==NULL)//edge case
        return;
    
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preOrderTraversal(root->children[i]);
        
    }
    
    
}
void deleteTree(TreeNode<int>*root){
    
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;
}

int main(){
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2);
    TreeNode<int>* node2 = new TreeNode<int>(3);
    TreeNode<int>* node3=new TreeNode<int>(4);
    TreeNode<int>* node4=new TreeNode<int>(5);
    
    
    root->children.push_back(node1);
    root->children.push_back(node2);
    node1->children.push_back(node3);
    node1->children.push_back(node4);
    
    //printTree(root);
    
    TreeNode<int>* node5=new TreeNode<int>(0);
//    node5=takeInputLevelWise();
//    printTreeLevelWise(node5);
    //cout<<"\n\n"<<endl;
    //printTree(node5);
    //cout<<countNodes(node5);
    
    
    //node5=maxdata(root);
    //cout<<node5->data;
    //1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
//    node5=takeInputLevelWise();
//    printTreeLevelWise(node5);
//    cout<<"\n"<<endl;
//    preOrderTraversal(node5);
    
    TreeNode<int>*node7;
    cout<<node7->data<<endl;
    cout<<node7->children.size();
    
}























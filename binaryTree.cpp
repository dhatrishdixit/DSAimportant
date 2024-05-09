#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class node{
  public:

    int data ;
    node* left ;
    node* right ;

  
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL; 
    }
};

node* buildTree(node* root){
    cout << "enter data :"<<endl;
    int data ;
    cin >>data;
    root = new node(data);
     
    //base case
    if(data == -1) return NULL;


    // using recursion for other elements 
    // for left 
    cout<<"enter data in the left of :"<<data<<endl;
    root->left = buildTree(root->left);


     cout<<"enter data in the right of :"<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
     
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
       
        
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                 q.push(NULL);
            }
        }
        else{
        cout<<temp->data;
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}


void reverseLevelOrderTranverse(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    s.push(root);
    node* temp = root;
    while(!q.empty()){
       temp = q.front();
       q.pop();
        
       if(temp->left){
        q.push(temp->left);
        s.push(temp->left);
       } 
       if(temp->right){
        q.push(temp->right);
        s.push(temp->right);
       }

    }


    while(!s.empty()){
       temp = s.top();
       s.pop();
       cout<<temp->data;


    }

}


void inorder(node* root){
    //base case 

    if(root == NULL) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    //base case 
    if(root == NULL) return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base case 
    if(root == NULL) return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
     node* root = NULL;
     root = buildTree(root);
     levelOrderTraversal(root);
     reverseLevelOrderTranverse(root);
     cout<<endl;
     inorder(root);
     cout<<endl;
     preorder(root);
     cout<<endl;
     postorder(root);
     
 
}
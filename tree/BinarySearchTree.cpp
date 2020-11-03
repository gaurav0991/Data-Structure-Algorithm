#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

};
Node *root=NULL;
void insert(int val){
Node * newNode=new Node();
newNode->data=val;
newNode->left=NULL;
newNode->right=NULL;
if(root==NULL){
root=newNode;
}else{
    Node* current=root;
    while (true)
    {
        if(val<current->data){
            if(current->left==NULL){
                current->left=newNode;
                return;
            }else{
                current=current->left;
            }
        }
        else if(val>current->data){
            if(current->right==NULL){
                current->right=newNode;
                return;
            }else{
                current=current->right;
            }
        }
    }
    
}
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);

}
int main(){
    insert(10);
    insert(12);
    insert(2);
    insert(22);
    insert(5);


    insert(15);
    preOrder(root);

}
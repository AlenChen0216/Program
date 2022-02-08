#include<iostream>
using namespace std;
struct btree{
    int data;
    btree* left;
    btree* right;
};
btree* Nw(int data){
    btree* newnode = new btree();
    newnode->data = data;
    newnode->right = newnode->left=NULL;
    return newnode;
}
btree* insert(btree* root,int data){
    if(root==NULL){
        root=Nw(data);
    }else if(root->data>=data){
        root ->left = insert(root->left,data);
    }else {
        root ->right= insert(root->right,data);
    }
    return root;
}
void print(btree* root){
    if(root->left)  print(root->left);
    if(root==NULL) return;
    cout<<root->data<<" ";
    if(root->right) print(root->right);

}
int main(){
    btree* root = NULL;
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        root=insert(root,num);
    }
    print(root);
    return 0;
}

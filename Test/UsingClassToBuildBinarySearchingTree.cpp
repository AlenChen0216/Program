#include<iostream>
using namespace std;
class BST;
class TreeNode{
private:
    TreeNode *left=NULL;
    TreeNode *right=NULL;
    TreeNode *parent=NULL;
    int data=0;
public:
    TreeNode(){
        left=NULL;
        right=NULL;
        parent=NULL;
        data=0;
    }
    TreeNode(int d){  //建立節點
        left=NULL;
        right=NULL;
        parent=NULL;
        data=d;
    }
    friend class BST; // BST可使用TreeNode的東西
};
class BST{
private:
    TreeNode*root;
    TreeNode*Leftmost(TreeNode*current); // 找目前最左邊的Node
    TreeNode*Succesor(TreeNode*current); // 找目前節點右方最左的Node，否則找"對父節點而言為左方的節點"
public:
    BST(){
        root=NULL;
    }
    bool Search(int target);
    void InsertNode(int key);
    void InorderPrint(); // 中序歷遍(左->中->右)
};
void BST::InsertNode(int key){
    TreeNode* temp=NULL; //複製root節點，保持root的狀態
    TreeNode* par=NULL;  //暫時的父節點
    TreeNode* insert_node=new TreeNode(key); //輸入節點
    temp=root;
    while(temp!=NULL){ //找輸入節點的父節點，較大者往右，較小者往左
        par=temp;
        if(insert_node->data<temp->data){
            temp=temp->left;
        }else {
            temp=temp->right;
        }
    }
    insert_node->parent=par;
    if(par==NULL){      //  確認輸入節點其父節點的關係，若輸入節點沒父節點，則輸入節點變成root
        this->root=insert_node;
    }else if(par->data>insert_node->data){
        par->left=insert_node;
    }else {
        par->right=insert_node;
    }
}
bool BST::Search(int target){
    TreeNode* current=root;
    while(current!=NULL&&target!=current->data){ //找到目標或到Tree的底，則退出while
        if(target>current->data){
            current=current->right;
        }else {
            current=current->left;
        }
    }
    if(current!=NULL){
        return false;
    }else return true;
}
TreeNode* BST::Leftmost(TreeNode*current){
    while(current->left!=NULL){
        current=current->left;
    }
    return current;
}
TreeNode* BST::Succesor(TreeNode* current){
    if(current->right!=NULL){
        return Leftmost(current->right);
    }
    TreeNode *y=current->parent;
    while(y!=NULL&&current==y->right){
        current=y;
        y=y->parent;
    }
    return y;
}
void BST::InorderPrint(){
    TreeNode* current=new TreeNode;
    current=Leftmost(root);
    while(current!=NULL){   //先左
        cout<<current->data<<" ";
        current=Succesor(current);
    }
}
int main(){
    int n;
    cout<<"Numbers of elements you want: ";
    cin>>n;
    BST elem;
    cout<<"Input your elements: ";
    while(n--){
        int tem;
        cin>>tem;
        elem.InsertNode(tem);
    }
    cout<<"In-order Traversal : ";
    elem.InorderPrint();
    cout<<"\n";
    cout<<"What elements you wanna search?(inputing negative numbers will end the program)\n";
    while(1){
        int sea;
        cin>>sea;
        if(sea<0) break;
        bool che=elem.Search(sea);
        if(che){
            cout<<sea<<" isn't found in the tree"<<"\n";
        }else {
            cout<<sea<<" is found in the tree"<<"\n";
        }
    }
    return 0;
}

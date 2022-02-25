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
    TreeNode(int d){  //�إ߸`�I
        left=NULL;
        right=NULL;
        parent=NULL;
        data=d;
    }
    friend class BST; // BST�i�ϥ�TreeNode���F��
};
class BST{
private:
    TreeNode*root;
    TreeNode*Leftmost(TreeNode*current); // ��ثe�̥��䪺Node
    TreeNode*Succesor(TreeNode*current); // ��ثe�`�I�k��̥���Node�A�_�h��"����`�I�Ө������誺�`�I"
public:
    BST(){
        root=NULL;
    }
    bool Search(int target);
    void InsertNode(int key);
    void InorderPrint(); // ���Ǿ��M(��->��->�k)
};
void BST::InsertNode(int key){
    TreeNode* temp=NULL; //�ƻsroot�`�I�A�O��root�����A
    TreeNode* par=NULL;  //�Ȯɪ����`�I
    TreeNode* insert_node=new TreeNode(key); //��J�`�I
    temp=root;
    while(temp!=NULL){ //���J�`�I�����`�I�A���j�̩��k�A���p�̩���
        par=temp;
        if(insert_node->data<temp->data){
            temp=temp->left;
        }else {
            temp=temp->right;
        }
    }
    insert_node->parent=par;
    if(par==NULL){      //  �T�{��J�`�I����`�I�����Y�A�Y��J�`�I�S���`�I�A�h��J�`�I�ܦ�root
        this->root=insert_node;
    }else if(par->data>insert_node->data){
        par->left=insert_node;
    }else {
        par->right=insert_node;
    }
}
bool BST::Search(int target){
    TreeNode* current=root;
    while(current!=NULL&&target!=current->data){ //���ؼЩΨ�Tree�����A�h�h�Xwhile
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
    while(current!=NULL){   //����
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

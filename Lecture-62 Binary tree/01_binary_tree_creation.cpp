// Binary tree creation
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    public:
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *creationBT(Node *root){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root=new Node(data);

    if(data==-1)
    return NULL;

    cout<<"Enter the left data of:"<<data<<endl;
    root->left=creationBT(root->left);
    cout<<"Enter the right data of:"<<data<<endl;
    root->right=creationBT(root->right);

    return root;
}
int main(){
    Node *root=NULL;
    creationBT(root);
    return 0;
}
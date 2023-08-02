#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int num;
    public:
    Node(int n){
        num=n;
        next=NULL;
    }
};
void print(Node *head){
    cout<<"The elements of nodes are: ";
    while(head!=NULL){
        cout<<head->num<<" ";
        head=head->next;
    }
}
Node* createNode(){
    int n, num;
    Node *head=NULL;
    Node *tail=NULL;
    cout<<"How many node you want to create: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number of node "<<i+1<<": ";
        cin>>num;
        Node *newNode=new Node(num);

        if(i==0)
        head=newNode;

        if(i>0)
        tail->next=newNode;
        
        tail=newNode;
    }
    return head;
}
int main(){
    Node *head=createNode();
    print(head);
    return 0;
}
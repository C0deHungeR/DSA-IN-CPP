#include<iostream>
using namespace std ;

class Node{
    public :
    int data ;
    Node* right ;
    Node* left ;

    Node(int data){
        this->data = data;
        this->right = nullptr ;
        this->left = nullptr ;
    }
};

Node*BuildTree(Node*root){

    int data ;
    cout<<"Enter Data "<<endl;
    cin>>data ;
    root = new Node(data);

    if(data == -1 ){
        return nullptr ;
    }

    cout<<"Enter Data in left of "<<data <<endl;
    root->left = BuildTree(root->left) ;
    cout<<"Enter Data in right of "<<data<<endl;
    root->right = BuildTree(root->right);

    return root ;
}

void PostOrderTraversal(Node*root){
    if(root == nullptr){
        return ;
    }
    
    PostOrderTraversal(root->left) ;
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node*root = nullptr ;
    root = BuildTree(root);

    cout<<endl<<"postorder traversal : ";
    PostOrderTraversal(root);
}
#include<iostream>
#include<queue>
using namespace std ;

class Node{
    public :

    int data ;
    Node* left ;
    Node* right ;

    Node(int data){
        this->data = data ;
        this->left = NULL ;
        this->right = NULL ;
    }

};

// building tree recursively
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

//creating tree using queue 
void BuildFromLevelOrder(Node* &root){
    queue<Node*>q;
    cout<<"Enter the data for root : "<<endl;
    int data ;
    cin>>data ;
    root = new Node(data);
    q.push(root);
    while(!q.empty()){
        
        Node*temp = q.front();
        q.pop();

        cout<<"Enter data for left :"<<endl;
        int leftdata ;
        cin>>leftdata ;

        if(leftdata != -1){
            
            temp->left = new Node(leftdata);
            q.push(temp->left);

        }

        cout<<"Enter data for right :"<<endl;
        int rightdata ;
        cin>>rightdata ;

        if(rightdata != -1){
            
            temp->right = new Node(rightdata);
            q.push(temp->right);

        }
    }
}
int main(){
    Node*root = nullptr ;
    root = BuildTree(root); // call to build tree recursively
    BuildFromLevelOrder(root); // call to build tree using queue 
    return 0 ;
}
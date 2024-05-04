#include<iostream> 
#include<queue>
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

void LevelOrderTraversal(Node*root){
    if(root == nullptr){
        return  ;
    }
    queue<Node*>q ;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node*temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
           
        }
    }
}
int main(){
    Node*root = nullptr ;
    
    root = BuildTree(root);
    LevelOrderTraversal(root);
    return 0 ;
}

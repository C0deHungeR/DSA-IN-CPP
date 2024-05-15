#include<iostream>
using namespace std ;
#include<queue>

class Node{
    public :
    int data ;
    Node* left ;
    Node* right ;
    Node(int data){
        this->data = data ;
        this->left = nullptr ;
        this->right = nullptr ;
    }

};
void LevelOrderTraversal(Node*root){
    if(root == nullptr){
        return ;
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
            cout<<temp->data<<" " ;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
   }

}
Node*createBst(Node*root,int data){
    if(root == nullptr){
        root = new Node(data);
    }
    else{
        if( data > root->data){
            root->right = createBst(root->right,data) ;
        }
        else{
            root->left = createBst(root->left,data);
        }
    }
    return root ;
}

void insertElements(Node* &root){
    int data ;
    cin>>data ;
    while(data  != -1){
        root = createBst(root,data) ;
        cin>>data ;
    }
}
int InorderSuccessor(Node* root, int data) {
    if (root == nullptr) {
        return -1;
    }
    if (data > root->data) {
        return InorderSuccessor(root->right, data);
    } else if (data < root->data) {
        int succ = InorderSuccessor(root->left, data);
        return (succ == -1) ? root->data : succ;
    } else {
        Node* temp = root;
        if (temp->right == nullptr) {
            return -1; // No successor
        } else {
            temp = temp->right;
            while (temp->left != nullptr) {
                temp = temp->left;
            }
            return temp->data;
        }
    }
}


int main(){
    Node* root  = nullptr ;
    insertElements(root);
    cout<<"Level Order Traversal"<<endl ;
    LevelOrderTraversal(root);
    cout<<endl<<InorderSuccessor(root,21);
    return 0 ;
}
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
int InorderPredesessor(Node* root, int data) {
    if (root == nullptr) {
        return -1; // Return some invalid value to indicate not found
    }
    if (data > root->data) {
        // If data is greater, inorder predecessor could be in the right subtree or the current node
        int rightPred = InorderPredesessor(root->right, data);
        return (rightPred != -1) ? rightPred : root->data;
    } else if (data < root->data) {
        // If data is smaller, inorder predecessor could be in the left subtree
        return InorderPredesessor(root->left, data);
    } else {
        // If data matches, find the maximum value in the left subtree
        if (root->left == nullptr) {
            return -1; // No predecessor
        }
        Node* temp = root->left;
        while (temp->right) {
            temp = temp->right;
        }
        return temp->data;
    }
}

Node* DeleteANode(Node*root,int val){
    if(root == nullptr){
        return nullptr ;
    }
    if(root->data == val){
        // for 0 child
        if(root->right == nullptr && root->left == nullptr){
            delete root ;
            return nullptr ;
        }

        //for 1 child 

        // if right child is present 
        if(root->right != nullptr && root->left == nullptr){
            Node*temp = root->right ;
            delete root ;
            return temp ;

        }
        //if left child is present
        if(root->right == nullptr && root->left != nullptr){
            Node*temp = root->left ;
            delete root ;
            return temp ;
        }

        //for 2 child 
        if(root->left != nullptr && root->right != nullptr){
            int mini = InorderPredesessor(root,val);
            root->data = mini ;
            root->right = DeleteANode(root->right,mini);
            return root ;
        }

    }
    else if(val > root->data){
        root->right = DeleteANode(root->right,val);
        return root ;
    }
    else{
        root->left = DeleteANode(root->left,val);
        return root ;
    }
    return root ;
}

int main(){
    Node* root  = nullptr ;
    insertElements(root);
    cout<<"Before deleting a Node"<<endl ;
    LevelOrderTraversal(root);

    cout<<"After deleting Node"<<endl;
    root = DeleteANode(root,21);
    LevelOrderTraversal(root);
    return 0 ;
}
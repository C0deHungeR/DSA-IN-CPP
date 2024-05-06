#include<iostream>
using namespace std  ;

void ReverselevelOrderTraversal(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp != nullptr) {
            s.push(temp);
            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        } else {
            if (!q.empty()) 
                q.push(nullptr);
        }
    }

    while (!s.empty()) {
        if (s.top() != nullptr)
            std::cout << s.top()->data << " ";
        s.pop();
    }
}
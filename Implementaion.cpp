#include<iostream>
#include<string>
using namespace std ;


class TrieNode{
    public:
    int data ;
    bool isterminal;
    TrieNode*children[26];

    TrieNode(int data){
        this->data = data ;
        this->isterminal = false ;
        for(int i = 0 ; i < 26 ; i++){
            this->children[i] = nullptr ;
        }
    }
};

void insert(TrieNode*root,string str){
   
    if(str.size() == 0){
        root->isterminal = true ;
        return ;
    }

    int index = str[0] - 'a' ;
    TrieNode*child ;

    if(root->children[index] != nullptr){
        child = root->children[index];
        
    }else{
        child = new TrieNode(str[0]);
        root->children[index] = child ;
    }

    insert(child,str.substr(1));
}

bool search(TrieNode*root , string key){

    if(key.size() == 0 && root->isterminal == true){
        return true ;
    }
    int index = key[0] - 'a';
    if(root->children[index] != nullptr){
        root = root->children[index];
    }else{
        return false ;
    }
    return search(root,key.substr(1));
}

void deleteWord(TrieNode*root,string key){
     if(key.size() == 0 && root->isterminal == true){
        root->isterminal = false ;
        return ;
    }
    int index = key[0] - 'a';
    if(root->children[index] != nullptr){
        root = root->children[index];
    }else{
        cout<<"Word Not Found"<<endl;
        return ;
    }
    deleteWord(root,key.substr(1));
}

int main(){
    TrieNode*root = new TrieNode('-');
    insert(root,"nachiket");
    insert(root,"nach");
    insert(root,"coding");

    cout<<search(root,"nachiket")<<endl;
    cout<<search(root,"nach")<<endl;
    cout<<search(root,"nac")<<endl;
    cout<<search(root,"nh")<<endl;
    deleteWord(root,"nach");
    cout<<search(root,"nach")<<endl;
    deleteWord(root,"yoyo");

    return 0;
}
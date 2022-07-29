#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

template <typename T>

class BinaryNodeTree{
public:
    T data;
    BinaryNodeTree* left;
    BinaryNodeTree* right;
    
    BinaryNodeTree(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
    
    ~BinaryNodeTree(){
        delete left;
        delete right;
    }
};

BinaryNodeTree<int>* takeinput_levelwise(){
    int rootdata;
    // cout << "Enter root data" << endl;
    std::cin >> rootdata;
    
    if(rootdata == -1){
        return NULL;
    }
    
    BinaryNodeTree<int>* root = new BinaryNodeTree<int>(rootdata);
    
    queue<BinaryNodeTree<int>*> pending_nodes;
    pending_nodes.push(root);
    
    while(!pending_nodes.empty()){
        BinaryNodeTree<int>* front = pending_nodes.front();
        pending_nodes.pop();
        
        // cout<<"Enter left child of " <<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        
        if(leftchilddata!=-1){
            BinaryNodeTree<int>* child = new BinaryNodeTree<int>(leftchilddata);
            front->left = child;
            pending_nodes.push(child);
        }
        
        // cout<<"Enter right child of " <<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        
        if(rightchilddata != -1){
            BinaryNodeTree<int>* child = new BinaryNodeTree<int>(rightchilddata);
            front->right = child;
            pending_nodes.push(child);
        }
    }
    return root;
    
}

void leaf_nodes(BinaryNodeTree<int>* root){
    if (!root)
        return;
        
    if(root->left== NULL && root->right== NULL){
        cout<< root->data <<" ";
        return;
    }
        
    if(root->left){
        leaf_nodes(root->left);
    }
    
    if(root->right){
        leaf_nodes(root->right);
    }
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main()
{
    BinaryNodeTree<int>* root = takeinput_levelwise();
    leaf_nodes(root);
    delete root;
    return 0;
}

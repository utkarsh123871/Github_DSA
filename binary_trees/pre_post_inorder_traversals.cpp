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


void PrintBinaryTree(BinaryNodeTree<int>* root){
    // base case
    if(root == NULL){
        return;
    }
    
    cout << root->data << " : ";
    if(root->left != NULL){
        cout << "L" << root->left->data;
    }    
    
    if(root->right != NULL){
        cout << " R" << root->right->data;
    }
    
    cout<<endl;
    PrintBinaryTree(root->left);
    PrintBinaryTree(root->right);
}

BinaryNodeTree<int>* takeinput(){
    int rootdata;
    cout << "Enter data" << endl;
    std::cin >> rootdata;
    
    if(rootdata == -1){
        return NULL;
    }
    
    BinaryNodeTree<int>* root = new BinaryNodeTree<int>(rootdata);
    BinaryNodeTree<int>* leftChild = takeinput();
    BinaryNodeTree<int>* rightChild = takeinput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
    
}

BinaryNodeTree<int>* takeinput_levelwise(){
    int rootdata;
    cout << "Enter root data" << endl;
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
        
        cout<<"Enter left child of " <<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        
        if(leftchilddata!=-1){
            BinaryNodeTree<int>* child = new BinaryNodeTree<int>(leftchilddata);
            front->left = child;
            pending_nodes.push(child);
        }
        
        cout<<"Enter right child of " <<front->data<<endl;
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

// void print_level_wise(BinaryNodeTree<int>* root){
//     queue<BinaryNodeTree<int>*> pending_nodes;
//     pending_nodes.push(root);
    
//     while(!pending_nodes.empty()){
//         cout<< root->data <<" : ";
//         pending_nodes.pop();
        
//         if(pending_nodes.front()->left!=NULL){
//             cout << "L" << root->left->data;
//             pending_nodes.push(root->left);
//         }
        
//         if(pending_nodes.front()->right!=NULL){
//             cout << "R" << root->right->data;
//             pending_nodes.push(root->right);
//         }
        
//         cout<<endl;
//         print_level_wise(root->left);
//         print_level_wise(root->right);
//     }
// }

void inorder(BinaryNodeTree<int>* root){
    if(root == NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

void preorder(BinaryNodeTree<int>* root){
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(BinaryNodeTree<int>* root){
    if(root == NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryNodeTree<int>* root = takeinput_levelwise();
    // PrintBinaryTree(root);
    cout<<"inorder traversal ";
    inorder(root);
    cout<<endl;
    
    cout<<"preorder traversal ";
    preorder(root);
    cout<<endl;
    
    cout<<"postorder traversal ";
    postorder(root);
    cout<<endl;
    
    delete root;
    return 0;
}

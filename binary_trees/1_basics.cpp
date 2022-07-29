#include <iostream>

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

int main()
{
    /*BinaryNodeTree<int>* root = new BinaryNodeTree<int>(1);
    BinaryNodeTree<int>* node1 = new BinaryNodeTree<int>(2);
    BinaryNodeTree<int>* node2 = new BinaryNodeTree<int>(3);
    root->left = node1;
    root->right = node2;
    */
    
    BinaryNodeTree<int>* root = takeinput();
    PrintBinaryTree(root);
    delete root;
    return 0;
}

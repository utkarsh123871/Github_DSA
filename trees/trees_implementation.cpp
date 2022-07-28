#include <bits/stdc++.h>

using namespace std;

template <typename T>

class treenode{
public:
    T data;
    vector<treenode<T>*> children; // of class type
    
    treenode(T data){
        this->data = data;
    }
};

treenode<int>* takeinput(){
    int rootdata;
    cout << "Enter Data" << endl;
    cin >> rootdata;
    
    treenode<int>* root = new treenode<int>(rootdata);
    
    int n;
    cout << "Enter num of children" << rootdata <<endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        treenode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}


void printTree(treenode<int>* root){
    //edge case not base case
    if(root == NULL){
        return;
    }
    
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++) {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++) {
        printTree(root->children[i]);
    }
}

int main()
{
    // treenode<int>* root = new treenode<int>(1);
    // treenode<int>* node1 = new treenode<int>(2);
    // treenode<int>* node2 = new treenode<int>(3);
    
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    treenode<int>* root = takeinput();
    printTree(root);
    
    // TODO delete the tree 
    return 0;
}

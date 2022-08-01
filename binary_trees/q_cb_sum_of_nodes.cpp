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
};

BinaryNodeTree<int>* takeinput(){
	string left1,right1;
    int rootdata;
    cin >> rootdata;
    BinaryNodeTree<int>* root = new BinaryNodeTree<int>(rootdata);
    
    cin>>left1;
    
	if(left1 == "true"){
		BinaryNodeTree<int>* leftChild = takeinput();
		root->left = leftChild;
	}
    
    cin>>right1;
	
	if(right1 == "true"){
		BinaryNodeTree<int>* rightChild = takeinput();
		root->right = rightChild;
	}
    
    return root;
    
}

int sum_all_nodes(BinaryNodeTree<int>* root){
    if(root == NULL){
        return 0;
    }
    
	int sum = 0;
    sum = sum + root->data + sum_all_nodes(root->left) + sum_all_nodes(root->right);
    
    return sum;
}

int main()
{
    BinaryNodeTree<int>* root = takeinput();
    // PrintBinaryTree(root);
    // cout<<endl;
    int sum = 0 ;
	sum = sum_all_nodes(root);
    cout<<sum<<endl;
    return 0;
}

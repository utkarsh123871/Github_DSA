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
    
    if(root->left != NULL){
        cout << root->left->data << " => ";
    }

	else{
		cout<< "END => ";
	}    
    
	cout << root->data;
    
    if(root->right != NULL){
        cout << " <= " << root->right->data;
    }
	
	else{
		cout<< " <= END";
	}
    
    cout<<endl;
    PrintBinaryTree(root->left);
    PrintBinaryTree(root->right);
}

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


BinaryNodeTree<int>* build_tree_helper(int* in , int* pre , int InS , int InE , int PreS , int PreE){
    // base case
    if(InS > InE){
        return NULL;
    }
    
    int rootdata = pre[PreS];
    
    int rootindex = -1;
    for(int i = InS ; i<=InE ; i++){
        if(in[i] == rootdata){
            rootindex = i;
            break;
        }
    }
    
    int left_pre_start = PreS + 1; 
    int left_in_start = InS; 
    int left_in_end = rootindex - 1;
    int left_pre_end = left_in_end - left_in_start + left_pre_start;
    int right_pre_start = left_pre_end + 1;
    int right_pre_end = PreS;
    int right_in_start = rootindex + 1;
    int right_in_end = InE;
    
    BinaryNodeTree<int>* root = new BinaryNodeTree<int>(rootdata);
    
    root->left = build_tree_helper(in , pre , left_in_start , left_in_end , left_pre_start , left_pre_end);
    
    root->right = build_tree_helper(in , pre , right_in_start , right_in_end , right_pre_start ,right_pre_end);

    return root;
}


BinaryNodeTree<int>* build_tree(int* in , int* pre , int n){
    return build_tree_helper(in , pre , 0 , n-1 , 0 , n-1);
}

int main()
{
	int n , m , pre[100000] , inorder[100000];
	cin>>n;

	for(int i = 0 ; i<n ; i++){
		cin>> pre[i];
	}

	cin>>m;
	for(int i= 0 ; i<m ; i++){
		cin >> inorder[i];
	}
    
    BinaryNodeTree<int>* root = build_tree(inorder , pre , n);
    PrintBinaryTree(root);
    
    delete root;
    return 0;
}

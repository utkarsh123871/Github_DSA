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


BinaryNodeTree<int>* build_tree_helper(int* in , int* post , int InS , int InE , int PostS , int PostE){
    // base case
    if(InS > InE){
        return NULL;
    }
    
    int rootdata = post[PostE];
    
    int rootindex = -1;
    for(int i = InS ; i<=InE ; i++){
        if(in[i] == rootdata){
            rootindex = i;
            break;
        }
    }
    
    int left_post_start = PostS; 
    int left_in_start = InS; 
    int left_in_end = rootindex - 1;
    int left_post_end = left_in_end - left_in_start + left_post_start;
    int right_post_start = left_post_end + 1;
    int right_post_end = PostE - 1;
    int right_in_start = rootindex + 1;
    int right_in_end = InE;
    
    BinaryNodeTree<int>* root = new BinaryNodeTree<int>(rootdata);
    
    root->left = build_tree_helper(in , post , left_in_start , left_in_end , left_post_start , left_post_end);
    
    root->right = build_tree_helper(in , post , right_in_start , right_in_end , right_post_start ,right_post_end);

    return root;
}


BinaryNodeTree<int>* build_tree(int* in , int* post , int n){
    return build_tree_helper(in , post , 0 , n-1 , 0 , n-1);
}

int height( BinaryNodeTree<int>* root){
    if(root == NULL)
        return 0;
    
    return 1 + max(height(root->left) , height(root->right));
}

int diameter(BinaryNodeTree<int>* root){
    if(root == NULL)
        return 0;
        
    int option_1 = height(root->left) + height(root->right);
    
    int option_2 = diameter(root->left);
    
    int option_3 = diameter(root->right);
    
    return max(option_1 , max(option_2 , option_3));
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
// 	int n , m , post[100000] , inorder[100000];
// 	cin>>n;

// 	for(int i = 0 ; i<n ; i++){
// 		cin>> post[i];
// 	}

// 	cin>>m;
// 	for(int i= 0 ; i<m ; i++){
// 		cin >> inorder[i];
// 	}
    
    // BinaryNodeTree<int>* root = build_tree(inorder , post , n);
    BinaryNodeTree<int>* root = takeinput_levelwise();
    PrintBinaryTree(root);
    int dia = diameter(root);
    cout<<"Diameter of Binary Tree is: " << dia;
    delete root;
    return 0;
}

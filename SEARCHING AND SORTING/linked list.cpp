#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this -> data =data;
        next = NULL;
        }
};

int main(){
    // Statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;
//    cout<<n1.data<< " " << n2.data<<endl;
    cout << head->data<<endl;
    cout << head->next->data<<endl;
    cout << head->next->next<<endl;
}

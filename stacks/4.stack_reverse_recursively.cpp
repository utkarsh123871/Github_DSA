#include <iostream>
#include <stack>
using namespace std;

void tranfer(stack<int> &s1 , stack<int> &s2 , int n){
    for (int i = 0; i < n; i++) {
        s2.push(s1.top());
        s1.pop();
    }
}


void reverse_stack(stack<int> &s1){
    // helper stack 
    stack <int> s2;
    int n = s1.size();
    
    for (int i = 0; i < n; i++) {
        //pick the element at top and insert it at the bottom
        int x = s1.top();
        s1.pop();
        
        //tranfer n-i-1 elements from stack s1 to s2
        tranfer(s1,s2,n-i-1);        
        
        //insert the element x in s1
        s1.push(x);
        
        //tranfer n-i-1 elements from stack s2 to s1
        tranfer(s2,s1,n-i-1);
    }
}

int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    // while(!s.empty()){
    //     cout << s.top();
    //     s.pop();
    // }
    
    reverse_stack(s);
    
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}

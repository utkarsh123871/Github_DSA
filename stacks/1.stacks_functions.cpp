#include <iostream>
#include <vector>

using namespace std;

class stack{
private:
    vector<int> v;

public:
    void push(int data){
        v.push_back(data);
    }
    
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    
    bool empty(){
        return v.size() == 0;
    }
    
    int top(){
        return v[v.size() - 1];
    }
};

int main()
{
    stack s;
    for (int i = 0; i <= 10; i++) {
       s.push(i*i);
    }
    
    while(!s.empty()){
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}

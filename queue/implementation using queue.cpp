#include <iostream>
#include <queue>

using namespace std;

int main()
{
    std::queue<int> q;
    for (int i = 0; i <= 60; i++) {
        q.push(i);
    }
    
    while(!q.empty()){
        std::cout << q.front()<<" ";
        q.pop();
    }
    
    return 0;
}

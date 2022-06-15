#include <iostream>

using namespace std;

void clearbit(int &n , int i){
    int mask = (1<<i);
    mask = ~(mask);
    n = (n & mask); 
}

void updatebit(int &n , int i , int v){
    int mask = (1 << i);
    mask = ~(mask);
    n = (n & mask);
    
    n = (n | (v << i));
}
int main()
{
    int n;
    cin>>n;
    // std::cout << "Before masking n:" << n << std::endl;
    
    // clearbit(n , 3);
    
    // std::cout << "After masking n:" << n << std::endl;
    
    std::cout << "Before updating n:" << n << std::endl;
    
    updatebit(n , 3 , 0);
    
    std::cout << "After updating n:" << n << std::endl;
    return 0;
}

#include <iostream>

using namespace std;

int stairs(int n){
    // base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    
    // Recursive Relation
    int ways = stairs(n-1) + stairs(n-2) + stairs(n-3);
    return ways;
}

int main()
{
    int n;
    std::cin >> n;
    int b = stairs(n);
    std::cout << b << " ways" << std::endl;
    return 0;
}

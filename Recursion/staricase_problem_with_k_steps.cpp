#include <iostream>

using namespace std;

int stairs(int n){
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

int Nstairs(int n , int k){
    // base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    
    //Recursive Relation
    int ans = 0;
    for (int i = 1 ; i <= k; i++) {
        ans+=Nstairs(n-i , k);
    }
    return ans;
}

int main()
{
    int n , k;
    std::cin >> n >> k;
    // int b = stairs(n);
    // std::cout << b << " ways" << std::endl;
    int ans = Nstairs(n,k);
    cout << ans <<" ways";
    return 0;
}

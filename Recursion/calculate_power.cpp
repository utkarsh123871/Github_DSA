#include <iostream>

using namespace std;

int calculate_power(int a , int n){
    if(n==0){
        return 1;
    }
    
    return a*calculate_power(a , n-1);
}

int main()
{
    int a , n;
    cin>>a>>n;
    
    cout << calculate_power(a , n);
    return 0;
}

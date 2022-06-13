// Upper and Lower Bound
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Working for lower_bound
    int a[] = {10 , 20 , 40 , 40 , 40 , 50 , 60 , 100};
    int n = sizeof(a)/sizeof(a[0]);
    
    int key;
    std::cin >> key;

    int *ans = lower_bound(a , a+n , key);
    int Index = ans - a;
    if(Index == n){
        std::cout << "Key not found" << std::endl;
    }
    else{
        std::cout << "Value: " << *ans << std::endl;
        std::cout << "Index: " << ans - a << std::endl;
    }
    
    //Working for upper_bound
    //upper bound finds a Value or key which has strictly greater than the input value
    int arr[] = {10 , 20 , 40 , 40 , 40 , 50 , 60 , 100};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    
    int key1;
    std::cin >> key1;

    int *ans1 = upper_bound(arr , arr+n , key1);
    int Index1 = ans1 - arr - 1;  // bcz it returns a value greater than by 1
    if(Index1 == n1){
        std::cout << "Key not found" << std::endl;
    }
    else{
        std::cout << "Value: " << *ans1 << std::endl;
        std::cout << "Index: " << ans1 - arr << std::endl;
    }
    return 0;
}

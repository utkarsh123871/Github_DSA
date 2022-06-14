#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a , int b){
    return a <= b;
}

int main()
{
    int currency[] = {1 , 2 , 5 , 10 , 20 , 50 , 100 , 500 , 2000};
    int n = sizeof(currency)/sizeof(currency[0]);
    
    int money;
    std::cin >> money;
    
    while(money>0){
        int index = lower_bound(currency , currency+n , money , compare) - currency - 1;
        std::cout << "We would give an exchange of " << currency[index] << std::endl;
        
        money = money - currency[index];
    }

    return 0;
}

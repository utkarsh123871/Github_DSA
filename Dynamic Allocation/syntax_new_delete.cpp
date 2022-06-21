#include <iostream>

using namespace std;

int main()
{
    int b[100];
    std::cout << sizeof(b) << std::endl;
    
    // dynamic
    int n;
    std::cin >> n;
    int *a = new int[n];
    std::cout << sizeof(a) << std::endl;
    std::cout << a << std::endl;
    
    //free up space
    delete []a;
    
    return 0;
}

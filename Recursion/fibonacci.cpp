//R.R. => f(n) = f(n-1) + f(n-2)

#include <iostream>

using namespace std;

int fib(int n){
    if(n==0 || n==1)
        return n;
    
    // recursive case
    return(fib(n-1)+fib(n-2)); 

}

int main()
{
    int n;
    cin>>n;
    
    std::cout << fib(n) << std::endl;

    return 0;
}

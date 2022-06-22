#include <iostream>
#include <string.h>

using namespace std;

int string_to_int(char *a , int n){
    // base case
    if(n==0){
        return 0;
    }
    
    // recursive case
    int digit = a[n-1] - '0';
    int smallerAns = string_to_int(a , n-1);
    int biggerAns = smallerAns*10 + digit;
    return biggerAns;
}

int main()
{
    char a[] = "219";
    int n = strlen(a);
    
    int ans = string_to_int(a,n);
    std::cout << ans << std::endl;
    std::cout << ans+1 << std::endl;
    return 0;
}

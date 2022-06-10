#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 4, 5, 6, 9, 2, 7};
    int n = sizeof(a)/sizeof(a[0]);

    int i=0 , j=n-1;
    int sum = 11;
    
    while(i<j){
        if(a[i] + a[j] == sum){
            std::cout << a[i] << " " << a[j] << std::endl;
            i++;
            j--;
        }
        
        else if(a[i] + a[j] > sum){
            j--;
        }
        
        else if(a[i] + a[j] < sum){
            i++;
        }
    }
    return 0;
}

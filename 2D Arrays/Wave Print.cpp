#include <iostream>

using namespace std;

int main()
{
    int n , m;
    int arr[30][40];
    std::cout << "Enter number of rows and columns" << std::endl;
    std::cin >> n >> m;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }
    
    //printing in wave form
    //number of columns are even
        for (int j = 0; j < m; j++) {
            if(j%2 == 0){
                for (int i = 0; i < n; i++) {
                    std::cout << arr[i][j]<<" ";
                }
            }
            else{
                for (int i = n-1 ; i >= 0; i--) {
                    std::cout << arr[i][j] <<" ";
                }
            }
        }

    return 0;
}

//Spiral Print.cpp
#include <iostream>

using namespace std;

void spiralprint(int a[][100] , int n , int m){
    //Inititalize the four iterators , N = Rows , M = Columns 
    int sr = 0 , sc = 0 , er = n-1 , ec = m-1;
    
    while(sr<=er and sc<=ec){
        //1. Print sr from sc to ec , sr++
        for (int col = sc ; col <= ec ; col++) {
            std::cout << a[sr][col] << " ";
        }
        sr++;
        
        //2. Print ec from sr to er , ec--
        for (int row = sr; row <= er; row++) {
            std::cout << a[row][ec] << " ";
        }
        ec--;
        
        //3. Print er from ec to sc , er--
        if(sr<er){
            for (int col = ec ; col >= sc ; col--) {
                std::cout << a[er][col] << " ";
            }
            er--;
        }
        
        //4. Print sc from er to sr , sc++
        if(sr < er){
            for (int row = er ; row >= sr ; row--) {
                std::cout << a[row][sc] << " ";
            }
            sc++;
        }
    }
    cout<<endl;
}

int main()
{
    int a[100][100];
    int r,c;
    std::cin >> r >>c;
    
    int val = 1;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c ; j++) {
            a[i][j] = val ; 
            val++;
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c ; j++) {
            std::cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    std::cout << "Array in Spiral Print Manner" << std::endl;
    spiralprint(a , r , c);
    return 0;
}

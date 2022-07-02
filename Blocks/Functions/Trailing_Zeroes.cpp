#include <iostream>
#include <math.h>

using namespace std;

int cal_trailing(int n){
    //formula
    int i = 1 , zeroes = 0;
    // while loop for the function
    while(i<=n/2){
        zeroes += n/pow(5 , i);
        i++;
    }
    return zeroes;
    
}

int main()
{
    int n;
    cin>>n;
    cout << cal_trailing(n);
    return 0;
}

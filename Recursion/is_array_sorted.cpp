#include <iostream>

using namespace std;

bool is_Array_Sorted(int arr[] , int n){
    //base case
    if(n==0 || n==1){
        return true;
    }
    
    //recursive case
    bool is_Smaller_Sorted = is_Array_Sorted(arr+1 , n-1);
    if(is_Smaller_Sorted && arr[0] < arr[1] ){
        return true;
    }
    else{
        return false;
    }
    
}

int main()
{
    int arr[] = {5,1,2,3,4,};
    int n = 5;
    bool ans = is_Array_Sorted(arr , n);
    
    if(ans == true){
        cout<<"Sorted";
    }
    
    else{
        cout<<"Not sorted";
    }
    return 0;
}

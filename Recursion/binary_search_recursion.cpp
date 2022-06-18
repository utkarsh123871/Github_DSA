#include <iostream>

using namespace std;

int Binary_Search(int *arr , int start , int end , int key){
    if(start > end){
        return -1;
    }
    
    // recursive case
    int mid = (start + end)/2;
    if(arr[mid] == key){
        return mid;
    }
    
    else if(arr[mid] < key){
        return Binary_Search(arr , mid+1 , end , key);
    }
    
    else{
        return Binary_Search(arr , start , mid-1 , key);
    }
}

int main()
{
    int arr[] = {1,4,7,8,10,12};
    // int n = sizeof(arr[])/sizeof(int);
    int n = 6;
    int key = 0;
    int ans = Binary_Search(arr , 0 , n-1 , key);
    std::cout << ans << std::endl;
    return 0;
}

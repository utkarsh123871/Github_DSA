#include<iostream>
using namespace std;

void BubbleSort(int input[] , int n){
    if(n==1)
        return;

    for(int i = 0 ; i<n-1 ; i++){
        if(input[i] > input[i+1]){
            int temp = input[i];
            input[i] = input[i+1];
            input[i+1] = temp;
        }
    BubbleSort(input , n-1);
    }
}

int main(){
    int input[] = {3, 1 , 6 , 9 , 0 , 4};
    cout<<"Before Sorting"<<endl;
    for(int  i = 0 ; i<6 ; i++){
        cout << input[i] << " ";
    }
    cout << endl;
    cout<<"After Sorting"<<endl;
    BubbleSort(input , 6);
    for(int  i = 0 ; i<6 ; i++){
        cout << input[i] << " ";
    }
    cout << endl;
}

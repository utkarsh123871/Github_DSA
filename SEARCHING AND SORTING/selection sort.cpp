#include<iostream>
using namespace std;

void selectionSort(int input[] , int n){
    for(int i = 0 ; i < n-1 ; i++){ // represents round
    // find minimum element
    int min = input[i] , minIndex = i;
    for(int j=i+1 ; j<n ; j++){
        if(input[j]<min){
            min = input[j];
            minIndex = j;
        }
    }
    //swap
    int temp = input[i];
    input[i] = input[minIndex];
    input[minIndex] = temp;
    }2
}

int main(){
    int input[] = {3, 1 , 6 , 9 , 0 , 4};
    cout<<"Before Sorting"<<endl;
    for(int  i = 0 ; i<6 ; i++){
        cout << input[i] << " "s;
    }
    cout << endl;
    cout<<"After Sorting"<<endl;
    selectionSort(input , 6);
    for(int  i = 0 ; i<6 ; i++){
        cout << input[i] << " "s;
    }
    cout << endl;
}


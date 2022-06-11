#include<iostream>

int index_number(int a[] , int N , int M){
	int i;
	for(i = 0; i<N ; i++){
			if(a[i] == M){
			    return i;
			    break;
			}
			else{
			    continue;
	    }
	}
	return -1;
}

int main() {
	int N , i , arr[100] , M;
	std::cin >> N;
	for(i = 0; i<N ; i++){
		std::cin >> arr[i];
	}
	std::cin>>M;
	std::cout << index_number(arr , N , M) << std::endl;
	return 0;
}

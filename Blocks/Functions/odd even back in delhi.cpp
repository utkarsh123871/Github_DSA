#include<iostream>

void drive_or_not(int n){
	int r , sum_even=0 , sum_odd=0;
	while(n>0){
		r = n%10; 
		n = n/10;

		if(r%2 == 0){ 			//even digits sum
			sum_even+=r;
		}
		else{					// odd digits sum
			sum_odd+=r;
		}
	}

	if(sum_even%4 == 0 || sum_odd%3 == 0){
		std::cout << "Yes" << std::endl;
	}
	else{
		std::cout << "No" << std::endl;
	}
}

int main() {
	int N, i ,n;
	std::cin >> N;
	for(i=0 ; i<N ; i++){
		std::cin >> n;
		drive_or_not(n);
	}
	return 0;
}

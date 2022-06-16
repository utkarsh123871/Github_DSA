#include <iostream>
using namespace std;

int main() {
	int T,X,i;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
	    std::cin >> X;
	    if(X<=15){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	
	int T , X , Y , i;
	std::cin >> T;
	
	for (int i = 0; i < T; i++) {
	    std::cin >> X >> Y;
	    if(X==Y){
	        std::cout << "ANY" << std::endl;
	    }
	    else if(X<=Y){
	        std::cout << "FIRST" << std::endl;
	    }
	    else{
	        std::cout << "SECOND" << std::endl;
	    }
	}
	
	return 0;
}

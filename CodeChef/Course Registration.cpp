#include <iostream>
using namespace std;

int main() {
	int T , N , M , K;
	cin>>T;
	for (int i = 0; i < T; i++) {
	    cin>>N>>M>>K;
	    if((M - K) >= N)
	        std::cout << "YES" << std::endl;
	    else
	        std::cout << "NO" << std::endl;
	}
	return 0;
}

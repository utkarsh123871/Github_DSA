#include <iostream>
using namespace std;

int main() {
	int T,X,Y,i;
	cin>>T;
	for (int i = 0; i < T; i++) {
	    cin>>X>>Y;
	    if(X>=Y){
	        std::cout << "YES" << std::endl;
	    }
	    else
	        std::cout << "NO" << std::endl;
	}
	return 0;
}

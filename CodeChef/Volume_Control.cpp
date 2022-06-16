#include <iostream>
using namespace std;

int main() {
	int T,X,Y,i,diff;
	cin>>T;
	for (int i = 0; i < T; i++) {
	    cin>>X>>Y;
	    diff = X-Y;
	    if(diff>0)
	        std::cout << X-Y << std::endl;
	    else
	        std::cout << (-1)*(X-Y) << std::endl;
	}
	return 0;
}

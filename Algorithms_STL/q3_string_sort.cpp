#include<iostream>
#include<algorithm>

using namespace std;

bool comparator(string s1, string s2){
    if(s1[0]==s2[0])    // if first character is same, then sort according to length
        return s1.length() > s2.length();
    else                // else sort lexicographically
        return s1<s2;
}

int main() {
	int N;
	string arr[1000];
	cin>>N;

	// taking words as input
	for(int i=0 ; i<N ; i++){
		cin>>arr[i];
	}

	sort(arr , arr+N , comparator);
	
	
	for (int i = 0; i < N; i++) {
	    {
	        std::cout << arr[i] << std::endl;
	    }
	}
	return 0;
}

#include<iostream>

using namespace std;

long long reverse(long long temp){
	long long ans=0;
	while(temp>0){
		long long rem = temp%10;
		ans = ans*10 + rem;
		temp = temp/10;
	}
	return ans;
}
long long replace(long long n){
	if(n == 0){
		return 5;
	}

	else{
    	long long x=0;
    	long long temp=0;
    
    	while(n>0){
    		x = n%10;
    		if(x == 0){
    			x = 5;
    		}
    		temp = temp*10 + x;
    		n=n/10;
	}
	return reverse(temp);
    }
}

int main() 
{
	long long n;
	cin>>n;
	if(n<0){
		n=n*(-1);
		cout << -1*(replace(n));
	}
	else{
	    cout << replace(n);
	}
	return 0;
}

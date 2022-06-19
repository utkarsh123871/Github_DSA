#include <iostream>
#include <string>

using namespace std;

string a[] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};

void Integer_to_String(int n){
    // base case
    if(n==0){
        return;
    }
    
    // recursive case
    int digit = n%10;
    Integer_to_String(n/10);
    std::cout << a[digit] << " ";
    
}

int main()
{
    int n;
    cin>>n;
    Integer_to_String(n);
    cout<<endl;
    return 0;
}

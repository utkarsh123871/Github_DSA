#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    vector<int> b(5,10); // this means it will make an array of size 5 with each having value 10
    vector<int> d{1,5,9,12,15};
    
    //Iterating over a vector 
    //Method 1 
    for (int i = 0; i < b.size(); i++) {
        cout<<b[i] <<" ";
    }
    
    cout<<endl;
    cout<<endl;
    
    //Method 2 
    for(auto it = d.begin() ; it!=d.end() ; it++){
        cout<<*it << " ";
    }
    cout<<endl;
    cout<<endl;
    
    //Method 3 
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    vector<int> v;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    cout<<v.size()<<endl;  // number of elements in array
    cout<<v.capacity()<<endl; //size of underlying array ************
    cout<<v.max_size()<<endl; // max number of elements a vector can hold in worst case
    
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;
    return 0;
}

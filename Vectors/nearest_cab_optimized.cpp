#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class car{
    public:
        string car_name;
        int x,y;
        
        car(){
            
        }
        
        car(string n , int x , int y){
            car_name = n;
            this->x = x;
            this->y = y;
        }
        
        int dist(){
            // returns square of distance from origin
            return (x*x + y*y);
        }
};

bool compare(car a , car b){
    int da = a.dist();
    int db = b.dist();
    
    // if(da == db){
    //     return a.size() < b.size();
    // }
    
    return da<db;
}

int main()
{
    int n;
    std::cin >> n;
    vector<car> v;
    
    for (int i = 0; i < n; i++) {
        int x,y;
        string name;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
        
    }
    
    sort(v.begin() , v.end() , compare);
    
    for(auto c : v){
        cout<<"Car "<<c.car_name<<" Distance "<<c.dist()<<" Location "<<c.x<<","<<c.y<<endl;
    }
    
    return 0;
}

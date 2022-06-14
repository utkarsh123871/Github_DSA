#include<iostream>
#include<algorithm>
using namespace std;
bool mycompare(pair<string,int>p1,pair<string,int>p2)
{
    if(p1.second==p2.second)   
    {
    return p1.first<p2.first;  
    }
    return p1.second>p2.second;
}
int main()
{
    int n,min_sal;
    cin>>min_sal;
    cin>>n;
    pair<string,int>emp[10005];
    string name;
    int salary;
    for(int i=0;i<n;i++){
        cin>>name>>salary;
        emp[i].first=name;
        emp[i].second=salary;
    }
    sort(emp,emp+n,mycompare);
    for(int i=0;i<n;i++){
        if(emp[i].second>=min_sal)     
        {
        cout<<emp[i].first<<" "<<emp[i].second<<endl;
        }
    }
    return 0;
}

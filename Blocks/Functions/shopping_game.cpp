#include <iostream>

using namespace std;

void winnner(int M , int N){
    int AS=1 , HS=2;
    for (int i = 1; i <= M; i+2) {
        if(AS<M)
        {
            AS+=i;
        }
    }
    
    for (int j = 2; j <= N; j+2) {
        if(HS<N)
        {
            HS+=j;
        }
    }
    
    if(AS<HS){
        cout<<"Harshit";
    }
    
    else{
        cout<<"Aayush";
    }
    
}

int main()
{
    int t,M,N;
    cin>>t;
    for (int i = 0; i < t; i++) {
        cin>>M>>N;
        winnner(M,N);
    }

    return 0;
}

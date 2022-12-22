#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int p1 = 0, p2 = 0, val;
    deque <int> dq(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(dq.front() > dq.back()){
            val = dq.front();
            dq.pop_front();
        }
        else {
            val = dq.back();
            dq.pop_back();
        }
        
        if(i % 2 == 0){ // player 1
            p1 += val;
        }
        else {
            p2 += val;
        }
    }
    cout << p1 << " " << p2;
    
    return 0;
}
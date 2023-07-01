#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    vector <int> v(t);
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        v[i] = bitset<8>(n)[0];
    }
    int zero = count(v.begin(), v.end(), 0);
    int one = count(v.begin(), v.end(), 1);
    if(zero == 1){
        cout << find(v.begin(), v.end(), 0) - v.begin() + 1;
    }
    else {
        cout << find(v.begin(), v.end(), 1) - v.begin() + 1;
    }
    return 0;
}
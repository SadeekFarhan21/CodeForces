#include <bits/stdc++.h>
using namespace std;


int main(){
    long long n, h = 0; cin >> n;
    vector <long long> x(n);
    vector <long long> y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            long long dx = x[i] - x[j];
            long long dy = y[i] - y[j];
            h = max(h, dx * dx + dy * dy);
        }
    }
    cout << h << "\n";
    return 0;
}
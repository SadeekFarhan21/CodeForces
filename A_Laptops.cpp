#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    bool isHappy = false;
    vector <pair <long long, long long>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if(v[i].first < v[i + 1].first && v[i].second > v[i + 1].second){
            cout << "Happy Alex" << "\n";
            return 0;
        }
    }
    cout << "Poor Alex" << "\n";
    return 0;
}
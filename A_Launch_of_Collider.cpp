#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <unsigned long long> v(n);
    string s; cin >> s;
    vector <int> diff1(n - 1);
    vector <int> diff2(n - 1);
    bool willCollide = false;
    
    // Initial position
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    // Initial distance
    for(int i = 0; i < n - 1; i++){
        diff1[i] = v[i + 1] - v[i];
    }

    // Simulation of distance
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            v[i] = v[i] - 1;
        }
        else if(s[i] == 'R'){
            v[i] = v[i] + 1;
        }
    }

    // Distance after simulation
    for(int i = 0; i < n - 1; i++){
        diff2[i] = v[i + 1] - v[i];
    }

    // Will Collide ?
    for(int i = 0; i < n - 1; i++){
        if(diff1[i] > diff2[i]){
            willCollide = true;
            break;
        }
    }

    vector <long long> finalDistance;
    // YES collide
    if(willCollide){
        for(int i = 0; i < n - 1; i++){
            if(diff1[i] > diff2[i]){
                finalDistance.push_back(v[i + 1] - v[i]);
            }
        }
    }
    else {
        cout << -1 << "\n";
        return 0;
    }
    cout << *min_element(finalDistance.begin(), finalDistance.end()) / 2 + 1;
    return 0;
}
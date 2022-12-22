#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h; cin >> n >> h;
    vector<int> v(n);
    int answer = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > h){
            answer += 2;
        }
        else {
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}
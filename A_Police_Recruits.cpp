#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > 0){
            sum += v[i];
        }
        else if(v[i] == -1 && sum > 0){
            sum -= 1;
        }
        else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
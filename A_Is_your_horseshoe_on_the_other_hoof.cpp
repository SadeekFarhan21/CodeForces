#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector <int> v(4);
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }
    set <int> s(v.begin(), v.end());
    cout << v.size() - s.size() << "\n";
    return 0;
}
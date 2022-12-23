#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    set <int> s(v.begin(), v.end());
    if(s.size() < 3){
        cout << 0 << "\n";
        return 0;
    }

    int o = count(v.begin(), v.end(), 1);
    int tw = count(v.begin(), v.end(), 2);
    int th = count(v.begin(), v.end(), 3);

    int c = min({o, tw, th});
    vector <int> one, two, three; 
    cout << c << "\n";
    for (int i = 0; i < n; i++){
        if(v[i] == 1) one.push_back(i + 1);
        else if(v[i] == 2) two.push_back(i + 1);
        else three.push_back(i + 1);
    }
    for(int i = 0; i < c; i++){
        cout << one[i] << " " << two[i] << " " << three[i] << "\n";
    }
    return 0;
}
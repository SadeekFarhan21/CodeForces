#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v(2); cin >> v[0] >> v[1];
    sort(v.begin(), v.end());
    map <int, string> m = {
        {1, "1/1"},
        {2, "5/6"},
        {3, "2/3"},
        {4, "1/2"},
        {5, "1/3"},
        {6, "1/6"}
    };
    cout << m[v[1]] << "\n";
    return 0;
}
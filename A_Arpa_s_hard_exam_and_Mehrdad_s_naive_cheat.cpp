#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n == 0){
        cout << 1 << "\n";
        return 0;
    }
    map <int, int> m = {
        {0, 6},
        {1, 8},
        {2, 4},
        {3, 2}
    };
    cout << m[n % 4] << "\n";
    return 0;

}
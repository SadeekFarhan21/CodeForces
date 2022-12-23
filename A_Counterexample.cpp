#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b; cin >> a >> b;
    if(a >= b - 1){
        cout << -1 << "\n";
        return 0;
    }
    long long x = a, y = a + 1, z = a + 2;
    for(long long i = x; i <= z; i++){
        for(long long j = y; j <= b; j++){
            for(long long k = z; k <= b; k++){
                if(__gcd(i, j) == 1 && __gcd(j, k) == 1 && __gcd(i, k) != 1 && i != j && j != k && i != k){
                    cout << i << " " << j << " " << k << "\n";
                    return 0;
                }
            }
        }       
    }
    cout << -1 << "\n";
    return 0;
}
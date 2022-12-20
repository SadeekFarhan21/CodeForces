#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, x; cin >> n >> x;
    long long answer = 0;
    for(long long i = 1; i <= n; i++){
        if(x % i == 0 && (x / i) <= n){
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int t, k, d; cin >> n >> t >> k >> d;

    // only first oven
    long double first = ceil((n / k) * t);

    // both first and second oven
    int cake = 0;
    int time = 0;

    while(n >= cake){
        // only first oven is baking
        if(time % t == 0){
            cake += k;
        }

        // second oven gets build
        if(time >= d){
            if((time - d) % t == 0){
                cake += k;
            }
        }
    }
    if(time < first) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, x; cin >> n >> x;
    long long ice = x;
    long long kid = 0;
    for(long long i = 0; i < n; i++){
        char c; cin >> c;
        int a; cin >> a;
        if(c == '+'){
            ice += a;
        }
        else if(c == '-'){
            if(ice >= a){
                ice -= a;
            }
            else {
                kid += 1;
            }
        }
    }
    cout << ice  << " " << kid << endl;
    return 0;
}
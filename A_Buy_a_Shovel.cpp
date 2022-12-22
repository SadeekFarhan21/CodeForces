#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    n %= 10;
    for(int i = 1; i < 10; i++){
        if((n * i) % 10 == 0 || (n * i) % 10 == k){
            cout << i << endl;
            break;
        }
    }
    cout << "\n";
    return 0;
}
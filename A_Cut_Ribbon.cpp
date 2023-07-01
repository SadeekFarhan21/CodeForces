#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c; cin >> n >> a >> b >> c;
    int answer = 0, total = 0;
    for(int i = 0; i < 4000; i++){
        for(int j = 0; j < 4000; j++){
            for(int k = 0; k < 4000; k++){
                total = a * k + b * j + c * i;
                if(total == n){
                    answer = max(answer, i + j + k);
                }
            }
        }
    }
    cout << answer;
    return 0;
}
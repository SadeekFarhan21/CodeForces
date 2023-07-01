#include <bits/stdc++.h>
using namespace std;

void sieve(){
    int maxN = 1000001;
    int isPrime[maxN] = 1;
    for(int i = 0; i <= maxN; i++) isPrime[i] = 1;
    isPrime[0] = 0, isPrime[1] = 0;
    for(int i = 2; i * i <= maxN; i++){
        if(isPrime[i] == 0){
            for(int j = i * i; j <= maxN; j += 1){
                isPrime[j] = 0;
            }
        }
    }
}
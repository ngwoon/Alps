#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {
    scanf("%d", &n);

    int cnt=1;
    while(n != 1) {
        if(n % 2) n = 3*n + 1;
        else n /= 2;
        ++cnt;
    }
    printf("%d", cnt);   
}
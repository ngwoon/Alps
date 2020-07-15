#include <bits/stdc++.h>
using namespace std;

string t, p;
int pi[1000001];
vector<int> ans;

void getPI() {
    int m = p.size(), j=0;
    for(int i=1; i<m; ++i) {
        while(j>0 && p[i] != p[j])
            j = pi[j-1];
        if(p[i] == p[j])
            pi[i] = ++j;
    }
}

int main(void) {
    cin.sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getline(cin, t);
    getline(cin, p);

    getPI();

    int n = t.size(), m = p.size(), j=0;
    for(int i=0; i<n; ++i) {
        while(j>0 && t[i] != p[j])
            j = pi[j-1];
        if(t[i] == p[j]) {
            if(j == m-1) {
                ans.push_back(i-m+1);
                j = pi[j];
            }
            else
                ++j;
        }
    }

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); ++i)
        cout << ans[i] + 1 << "\n";
}
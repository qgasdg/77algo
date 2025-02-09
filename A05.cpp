#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    int N, K; cin >> N >> K;

    int ans{0};
    for (int i{1}; i <= N; i++) {
        for (int j{1}; j <= N; j++) {
            if (K - i - j < 1) break;
            if (K - i - j > N) continue;
            ans++;
        }
    }

    // output
    cout << ans;
}

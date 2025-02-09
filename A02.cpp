#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    int N, X;
    cin >> N >> X;
  
    vector<int> v;
    for (int i{0}; i < N; i++) {
        int in; cin >> in;
        v.push_back(in);
    }
    bool ans{false};
    for (auto &e: v) { // linear search를 통해 O(N)으로 X가 v안에 존재하는지 확인.
        if (e == X) ans = true;
    }
  
    // output
    cout << (ans ? "Yes": "No"); // 삼항연산자
}

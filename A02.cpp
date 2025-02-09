#include <bits/stdc++.h>
using namespace std;

// N개의 수에 X가 존재하면 Yes / 아닐경우 No를 출력하시오.

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

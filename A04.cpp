#include <bits/stdc++.h>
using namespace std;

// 10진법으로 표기된 N을 2진법, 10자리로 출력하시오. 자릿수가 부족할 경우 왼쪽을 0으로 채우시오.

int main() {
    // input
    int N; cin >> N;

    deque<int> ans; // dequeue 자료구조
    do { // 2진법으로 변환하기
        ans.push_back(N % 2); 
        N /= 2;
    } while (N != 0);

    // output
    if (ans.size() < 10) { // 부족한 자릿수 채우기
        for (int i{0}; i < 10 - ans.size(); i++) cout << 0;
    }
    while (!ans.empty()) {
        cout << ans.back(); ans.pop_back();
    }
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        int total = N * M;
        int answer = -1;
        bool found = false;

        // Check all horizontal cuts
        for (int i = 1; i < N; i++) {
            int top = i * M;
            int bottom = total - top;

            if (top >= K) {
                answer = max(answer, bottom);
                found = true;
            }
            if (bottom >= K) {
                answer = max(answer, top);
                found = true;
            }
        }

        // Check all vertical cuts
        for (int j = 1; j < M; j++) {
            int left = j * N;
            int right = total - left;

            if (left >= K) {
                answer = max(answer, right);
                found = true;
            }
            if (right >= K) {
                answer = max(answer, left);
                found = true;
            }
        }

        if (!found) {
            // No valid cut found that can satisfy Bob
            if (K == 0) {
                // Bob wants nothing, Alice keeps all
                answer = total;
            } else {
                // Bob wants more than any part after cut, so Alice keeps nothing
                answer = 0;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}

//not solved by me
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// Precompute minimum operations to reach up to 1000
const int MAX_A = 1001;
vector<int> minSteps(MAX_A, 1e9);

void precompute() {
    minSteps[0] = 0;
    for (int val = 1; val < MAX_A; ++val) {
        for (int x = 1; x <= val; ++x) {
            int next = val + val / x;
            if (next < MAX_A)
                minSteps[next] = min(minSteps[next], minSteps[val] + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();  // Precompute how many steps are needed to reach each value

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        // Adjust values to step costs
        vector<pair<int, int>> items;
        for (int i = 0; i < n; ++i) {
            int cost = min(a[i], MAX_A - 1);  // safe bound
            int ops = minSteps[cost];
            items.push_back({ops, b[i]});
        }

        // 0/1 Knapsack
        vector<int> dp(k + 1, 0);
        for (auto [cost, value] : items) {
            for (int j = k; j >= cost; --j) {
                dp[j] = max(dp[j], dp[j - cost] + value);
            }
        }

        cout << dp[k] << '\n';
    }

    return 0;
}

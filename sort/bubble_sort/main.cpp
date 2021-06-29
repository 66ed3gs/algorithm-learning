#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n - 1; i >= 0; i--)

using namespace std;

vector<long> BubbleSort(vector<long> a) {
    REPR(i, a.size()) {
        bool sorted = true;
        REP(l, i) {
            if (a[l] > a[l + 1]) {
                swap(a[l], a[l + 1]);
                sorted = false;
            }
        }
        if (sorted) break;
    }

    return a;
}

signed main() {
    long n;
    vector<long> a, b;
    REP(i, 10) {
        cin >> n;
        a.push_back(n);
    }

    b = BubbleSort(a);

    REP(i, 10) { cout << b[i] << endl; }

    return 0;
}

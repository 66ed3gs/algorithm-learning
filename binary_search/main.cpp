#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n - 1; i >= 0; i--)

using namespace std;

int BinarySearch(vector<long> a, int b) {
    if (a.size() <= 0) return -1;

    int l = 0, r = a.size(), m;

    while (l < r) {
        m = (l + r) / 2;

        if (a[m] == b) {
            return m;
        } else if (b < a[m]) {
            r = m;
        } else {
            l = m + 1;
        }
    }

    return -1;
}

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
    cout << BinarySearch(b, 1) << endl;

    return 0;
}


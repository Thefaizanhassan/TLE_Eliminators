#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n), prefix(n);

    // Input the array values
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Compute prefix sums
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Process queries
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--; // Convert 1-based index to 0-based
        cout << prefix[r] - (l > 0 ? prefix[l - 1] : 0) << endl;
    }

    return 0;
}

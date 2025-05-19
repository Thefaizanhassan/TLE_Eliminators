#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define ll long long
using namespace std;

// Function to solve all the static range queries
vector<ll> solve(vector<ll>& prefixSum,
                 vector<vector<ll> > &queries, ll n, ll q) // Space added in `>>`
{
    // Creating Result array to store the result of each query
    vector<ll> result;
    for (size_t i = 0; i < queries.size(); i++) { // Changed range-based loop
        ll l = queries[i][0], r = queries[i][1];
        ll sum = prefixSum[r] - prefixSum[l - 1];
        result.push_back(sum);
    }
    return result;
}

int main()
{
    int n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    vector<vector<ll> > queries(q, vector<ll>(2)); // Space added in `>>`

    // Input the array values
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    // Compute prefix sums
    vector<ll> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    // Input the queries
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    // Function Call
    vector<ll> result = solve(prefixSum, queries, n, q);

    // Output the results
    for (size_t i = 0; i < result.size(); i++) { // Changed range-based loop
        cout << result[i] <<endl;
    }
    cout << endl;

    return 0;
}

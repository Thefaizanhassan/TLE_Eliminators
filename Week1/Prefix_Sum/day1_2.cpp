#include<iostream>
#include<vector>
#include<map>

#define ll long long

using namespace std;

ll solve(vector<ll>& arr, ll x, ll n){
    // Map to store frequency of prifix sum
    map<ll, ll> prefixSum;

    prefixSum[0] = 1;
    ll prefix = 0;
    ll count  = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        count += (prefixSum[prefix - x]);
        prefixSum[prefix] += 1;
    }
    return count;
}

int main(){
    int n, x;
    cin >> n >> x;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << solve(arr, x, n);
}
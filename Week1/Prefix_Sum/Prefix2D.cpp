#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int> > arr(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int> > prefix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prefix[i][j] = arr[i][j];
            if (j > 0) {
                prefix[i][j] += prefix[i][j - 1];
            }
            if (i > 0) {
                prefix[i][j] += prefix[i - 1][j];
            }
            if (i > 0 && j > 0) {
                prefix[i][j] -= prefix[i - 1][j - 1];
            }
            // prefix[i][j] = prefix[i][j-1] + prefix[i-1][j] + prefix[i-1][j-1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int ans = 0;
        if (l1 > 0) {
            ans -= prefix[l1 - 1][r1];
        }
        if (r1 > 0) {
            ans -= prefix[l1][r1 - 1];
        }
        if (l1 > 0 && r1 > 0) {
            ans += prefix[l1 - 1][r1 - 1];
        }
        cout << ans << " ";
        // ans = prefix[l2][r2] - prefix[l1-1][r1] - prefix[l1][r1-1] + prefix[l1-1][r1-1];
    }   
}
// Optimal Solution method
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, q, result = 0;
    cout<<"Enter the length of array: "<<endl;
    cin>>n;
    vector<int> arr(n+1);

    cout<<"Enter the elements: "<<endl;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> prefixArr1(n+1, 0), prefixArr2(n+1, 0);
    for (int i = 1; i <=n; i++) {
        prefixArr1[i] = prefixArr1[i-1] + (i * arr[i]); // i+1 is done to make it 1 index calculation
        prefixArr2[i] = prefixArr2[i-1] + arr[i];
    }
    
    cin>>q;
    while (q--) {
        int L, R;
        cout << "Enter the value of L and R: "<<endl;
        cin >> L >> R;
        cout << (prefixArr1[R] - prefixArr1[L - 1]) - (L - 1) * (prefixArr2[R] - prefixArr2[L - 1]) << " ";
    }
    cout << endl;

    return 0;
}
// Brute force method
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, L, q, R, result = 0;
    cout << "Enter array length: " << endl;
    cin>>n;
    vector<int> arr(n);
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin>>q;
    while (q--) {
        cout << "Enter L and R value: " << endl;
        cin >> L >> R;
        int count = 1;
        for (int i = L; i <= R; i++)
        {
            result += count * arr[i];
            count++;
        }
    }
    /*
    for (int i = L; i < R; i++) {
        result += (i-L+1) * arr[i];
    }
    */
    cout << "Result: " << endl;
    cout<<result<<endl;

    //T.C:- N*N*q;
}

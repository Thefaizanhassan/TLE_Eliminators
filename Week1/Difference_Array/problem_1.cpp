#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, L, R, result = 0;
    cout << "Enter array length: " << endl;
    cin>>n;
    vector<int> arr(n);
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter L and R value: " << endl;
    cin >> L >> R;
    int count = 1;
    for (int i = L; i <= R; i++)
    {
        result += count * arr[i];
        count++;
    }
    cout << "Result: " << endl;
    cout<<result<<endl;
}

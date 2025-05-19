#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int>pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    /* one can replace this for loop with the below line 
    for(auto &it:v) cin>>it;
    */

   int q;
   cin>>q;
   while (q--)
   {
    int l, r;
    cin>>l>>r;
    cout << pre[r] - ((l == 0) ? 0 : pre[l-1])<<" ";
    // int sum = 0;
    // for (int i = l; i <= r; i++)
    // {
    //     sum += v[i];
    // }
    // cout<<sum<<" ";
   }// O(n*q)
   
   return 0;
}
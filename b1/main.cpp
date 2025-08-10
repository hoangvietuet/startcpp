#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
using ll = long long;
#define ll long long
#define PI 3.14159
int main(){

  // vector<int> a[n]; // khai bao array two chieu
  // string a[n]; // char

  int n; cin >> n;
  int a[n + 1];

  for (int i = 1; i < n+1; i++) cin >> a[i];
  int pre[n+1] = {0};

  for (int i = 1; i <= n; i++){
    pre[i] = pre[i-1] + a[i];
  }

   int q; cin >> q;

   while(q--){
    int l, r; cin >> l >> r;

    cout << pre[r] - pre[l-1] << endl;
   }
}


 //prefex sum [l, r] = pre[r] - pre[l-1];


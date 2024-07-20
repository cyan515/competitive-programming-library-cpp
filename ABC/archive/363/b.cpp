#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
const int INF = 1001001001;
const ll LINF = 3001001001001001001;
const int MOD = 998244353;
const string Yes = "Yes";
const string No = "No";
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
template <typename T> istream &operator>>(istream &is, vector<T> &v) {for (T &in : v)is >> in;return is;}

int main() {
  int n,t,p;cin>>n>>t>>p;
  vector<int> l(n);cin>>l;
  rep(i,t) {
    int cnt = 0;
    rep(j,n) {
      if(l.at(j)++>=t) cnt++;
    }
    if(cnt>=p) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}

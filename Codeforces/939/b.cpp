#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1001001001;
const ll LINF = 3001001001001001001;
const int MOD = 998244353;
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define all(a) (a).begin(), (a).end()
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
template<typename T> istream &operator>>(istream &is, vector<T> &v) {for (T &in : v)is >> in;return is;}

void solve() {
  int n;cin>>n;
  vector<int> a(n);cin>>a;
  vector<int> cnt(n+1,0);
  rep(i,n) cnt.at(a.at(i))++;
  int ans = 0;
  rep(i,n+1) if(cnt.at(i)==2) ans++;
  cout << ans << "\n";
}

int main() {
  cin.tie(0) -> sync_with_stdio(0);
  int t;cin>>t;
  while(t--) solve();

  return 0;
}

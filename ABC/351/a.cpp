#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1001001001;
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define all(a) (a).begin(), (a).end()
template<typename T> istream &operator>>(istream &is, vector<T> &v) {for (T &in : v)is >> in;return is;}

int main() {
  int a=0;
  int b=0;
  rep(i,9) {
    int x;cin>>x;a+=x;
  }
  rep(i,8) {
    int x;cin>>x;b+=x;
  }
  cout << a-b+1 << endl;

  return 0;
}

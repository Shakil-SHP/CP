#include <bits/stdc++.h>
using namespace std;

#define FOR1(i, n) for (int i = 1; i <= int(n); ++i)
#define FORN(i, n) for (int i = 0; i < int(n); ++i)
#define FORE(i, l, r) for (int i = (int) l; i <= int(r); ++i)
#define FORD(i, n) for (int i = int(n)-1; i >= 0; --i)
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SQ(a) (a)*(a)
#define sp "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
typedef pair<int,int> pi;
constexpr int N = 1E9;
 
void solve() {
    int n;
    cin >> n;
    
    int mn = N, mx = -N;
    vi v(n), vt(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vt[i];
        mn = min(mn, v[i] - vt[i]);
        mx = max(mx, v[i] + vt[i]);
    }
    cout << fixed << setprecision(10) << 0.5 * (mn + mx) << "\n";
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // std::cout << std::fixed;

    // solve();
	int t;
	cin >> t;

	while(t--){
		solve();
	}
	
	return 0;
}
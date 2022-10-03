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

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
typedef pair<int,int> pi;
void solve(){

    int n,q;
    cin >> n >> q;
    ll a[n];
    ll hsh[n+1];
    FORN(i,n){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    hsh[0] = 0;
    FOR1(i,n+1){
        hsh[i] = hsh[i-1] + a[i-1];
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        cout << hsh[x]-hsh[x-y]<<endl;
    }
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();
	// int t;
	// cin >> t;

	// while(t--){
	// 	solve();
	// }
	
	return 0;
}
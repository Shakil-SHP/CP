#include <bits/stdc++.h>
using namespace std;

#define FOR1(i, n) for (int i = 1; i <= int(n); ++i)
#define FORN(i, n) for (int i = 0; i < int(n); ++i)
#define FORE(i, l, r) for (int i = (int) l; i <= int(r); ++i)
#define FORD(i, n) for (int i = int(n)-1; i >= 1; --i)
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
	int n;
    cin >> n;

    int a[n];
    FORN(i,n){
        cin >> a[i];
    }
    int size = 1;

    FORD(i,n){
        if(a[i] < a[i-1]){
            break;
        }else{
            size++;
        }
    }
    cout << size << endl;
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
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

void solve(){
	int n;
	cin >> n;
	int a[n],b[n],c[n];
	FORN(i,n){
		cin >>a[i];
	}
	FORN(i,n){
		cin >>b[i];
	}
	FORN(i,n){
		c[i] = b[i] - a[i];
	}
	sort(c,c+n,greater<int>());
	// FORN(i,n){
	// 	cout << c[i] << " ";
	// }

	
    int low = 0, high = n - 1, cnt = 0;
    while(low < high){
        if(c[low] + c[high] >= 0){
			cnt++, low++,high--;
		} 
        else {
			high--;
		}
    }

	cout << cnt <<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // solve();
	int t;
	cin >> t;

	while(t--){
		solve();
	}
	
	return 0;
}
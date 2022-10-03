#include <bits/stdc++.h>
using namespace std;

#define FOR1(i, n) for (int i = 1; i < int(n); ++i)
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
	ll n, h;
	cin >> n >> h;

	ll mx = 0;
	int a[n];
	vi v;
	FORN(i,n){
		cin >> a[i];
	}

	// FOR1(i,n){
	// 	ll num = a[i] - a[i-1];
	// 	if(mx < num){
	// 		 mx=num;
	// 	}
	// 	if((h-num) >= 0)
	// 		h -= num;
	// 	else{
	// 		h = 0;
	// 	}
	// 	v.push_back(num);
		
	// }
	// // if(h <= 0){
	// 	cout << ceil((h)/(double)2) <<endl;
	// // }

	if(n > h){
		cout << 1 <<endl;
	}else if(a[n-1] == h){
		cout << ceil(h/(double)n)<<endl;;
	}else{
		ll sec = ceil(h/(double)n);
		FOR1(i,n){
			if(a[i-1]+sec >a[i]){
				h -= (a[i]-a[i-1]);
			}else{
				ll num = a[i] - a[i-1];
				if(sec < num){
			 		sec=num;
				}
				h -= sec;
			}
		}
		if(h > 0)
		cout << h<<endl;
		else
		cout << ceil((h+sec)/(double)2)<<endl;
	}
	
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
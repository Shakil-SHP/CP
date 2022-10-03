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
bool found(int mid, vi & ar, int k){
  int ck = 0, tt=0, counter=0;
  FORN(i, ar.size()){
    if((ar[i]+tt) <= mid){
        tt += ar[i];
    }else{
        ck++;
        if(ck > k) return false;
        tt =ar[i];
    }
    counter++;
  }
  return (counter  == ar.size());
}
void solve(){
	int n,k;
    cin >> n >> k;

    vi a(n);
    FORN(i,n){
        cin>> a[i];
    }
//  FFFTTTT
    int lo= 0 , hi =1e5;
    while(lo<hi){
        int mid= (lo+hi)/2;
        if(found(mid, a, k)){
            hi = mid;
        }else{
         lo = mid + 1;
        }
    }
    cout << hi << endl;
    
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
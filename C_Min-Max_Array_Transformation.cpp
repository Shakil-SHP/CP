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
	ll n;
    cin >> n;
    vector<ll> a,b,d,e;

    FORN(i,n){
        ll num;
        cin >> num;
        a.push_back(num);
    }

    FORN(i,n){
        ll num;
        cin >> num;
        b.push_back(num);
    }

    FORN(i,n){
        auto num = lower_bound(b.begin(), b.end(), a[i]);
        d.push_back((*num)-a[i]); 
    }

    ll mn = *min(d.begin(),d.end());


    FORN(i,n){
        ll number = 0;
        if(accumulate(d.begin(),d.end(),0) < a[i] && a[i] < b[i]){
            auto num = upper_bound(b.begin(), b.end(), accumulate(d.begin(),d.end(),mn ));
            number = (*num);
        }
        else{
            auto num = upper_bound(b.begin(), b.end(), accumulate(d.begin(),d.end(),0));
            number = (*num);
        }
            

        if(number-a[i]>0)
            e.push_back(number-a[i]);
        else
            e.push_back(0); 
    }

    FORN(i,n){
        cout << d[i] << " ";
    }
    cout <<endl;

    FORN(i,n){
        cout << e[i] << " ";
    }
    cout <<endl;



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
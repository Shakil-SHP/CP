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
    int n;
    cin >> n;

    if(n==1){
        cout<<1<<"\n";
    }else{
        int a[n+1];
        FOR1(i,n){
            a[i] = i;
        }

        for (int i = 1; i <=n-1; i+=2)
        {
            swap(a[i],a[i+1]);
        }

        FOR1(i,n){
            cout << a[i] <<" ";
        }
        cout << "\n";
        
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
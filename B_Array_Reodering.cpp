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
    vi v,vo;
    int cnt=0;

    FORN(i,n){
        int num;
        cin >> num;
        if(num % 2 == 0)
            v.push_back(num);
        else
            vo.push_back(num);
    }
    
    FORN(i,vo.size()){
        v.push_back(vo[i]);
    }



    FORN(i,n){
        FOR1(j,n-1){
            if((i<j)&&(__gcd(v[i],2*v[j])) > 1){
                cnt++;
            }
        }
    }

    cout << cnt++ <<endl;

    
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
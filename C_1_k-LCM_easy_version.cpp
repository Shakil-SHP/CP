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
    int a,b;
    cin >> a >> b;
	if(a%2==0){
		int x,y,z;
		if((a/2)%2==0){
			x = a/2;
			y = x/2;
		}else{
			x = (a/2)-1;
			y = (a/2)-1;
		}
		z = a - (x+y);
		cout << x << " " << y << " " << z<<endl;
	}	
	else{
		int x,y,z;
		x = a/2;
		y = x;
		z = a - (x+y);
		cout << x << " " << y << " " << z<<endl;
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
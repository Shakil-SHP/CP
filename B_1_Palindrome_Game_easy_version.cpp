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

void reverse(string &str,int &n)
{
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void solve(){
	int n;
    string s,s1;
    cin >> n >> s;
    s1 = s;
    int alice = 0, bob = 0,cnt = 0;
    reverse(s1,n);
    bool pali = false;
    if(s.compare(s1) == 0) pali = true;
    FORN(i,n){
        if(s[i] == '0'){
            cnt++;
        }
    }

    if(pali == true && (cnt%2 == 0)){
        cout << "BOB"<<"\n";
    }else if(pali == true && (cnt%2 == 1)){
        cout << "ALICE"<<"\n";
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
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
char albet[26];
void solve(){
	string s1,s2;
    int n;
    cin >> n;
    cin >> s1;
    int i = n-1;
    while(i>=0){
        if((s1[i] == '0')){
            int s = (s1[i-2]-'0')*10+(s1[i-1]-'0')-1;
            s2 += 'a'+ s;
            i -= 3;
        }else{
            int s = (s1[i] -'0')-1;
            s2 += 'a'+s;
            i--;
        }
    }
    reverse(s2.begin(), s2.end());


    cout << s2 <<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // solve();
    

    for (int ch = 'a'; ch <= 'z'; ch++) {
    albet[ch-'a'] = ch;
    }
	int t;
	cin >> t;

	while(t--){
		solve();
	}
	
	return 0;
}
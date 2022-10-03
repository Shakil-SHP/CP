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

    int n,m;
    char c;
    int count = 0;
    cin >> n >> m >> c;
    unordered_set<char> st;

    char ar[n][m];

    FORN(i,n){
        FORN(j,m){
            cin >> ar[i][j];
        }
    }

    FORN(i,n){
        FORN(j,m){
            if(ar[i][j] == c){
                if((j-1) >= 0 && ar[i][j-1] != '.' && ar[i][j-1] != c && st.count(ar[i][j-1]) == 0){
                    int x = j-1;
                    while( (x >= 0) && ar[i][x] != '.' && st.count(ar[i][x])==0 && ar[i][x] != c){
                        count++;
                        st.insert(ar[i][x]);
                        x--;
                    }
                }
                if((j+1) <= m-1 && ar[i][j+1] != '.' && ar[i][j+1] != c && st.count(ar[i][j+1]) == 0){
                    int x = j+1;
                    while( (x >= m-1) && ar[i][x] != '.' && st.count(ar[i][x])==0 && ar[i][x] != c){
                        count++;
                        st.insert(ar[i][x]);
                        x++;
                    }
                }
                if((i-1) >= 0 && ar[i-1][j] != '.' && ar[i-1][j] != c && st.count(ar[i-1][j]) == 0){
                    int x = i-1;
                    while( (x >= 0) && ar[x][j] != '.' && st.count(ar[x][j])==0 && ar[x][j] != c){
                        count++;
                        st.insert(ar[x][j]);
                        x++;
                    }
                }
                if((i+1) <= n-1 && ar[i+1][j] != '.' && ar[i-1][j] != c && st.count(ar[i+1][j]) == 0){
                    int x = i+1;
                    while( (x >= n-1) && ar[x][j] != '.' && st.count(ar[x][j])==0 && ar[x][j] != c){
                        count++;
                        st.insert(ar[x][j]);
                        x++;
                    }
                }
            }
        }
    }
	cout << count <<endl;
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
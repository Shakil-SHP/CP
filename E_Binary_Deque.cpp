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
    int n,s;
    cin>>n>>s;
    deque<int> v(n);
    deque<int> vh;
    int count = 0;
    FORN(i,n){
        cin>>v[i];
        if(v[i] == 1){
            vh.push_back(i);
        }
    }
    // FORN(i,vh.size()){
    //     cout << vh[i] << " ";
    // }
    // cout << endl;

    if(accumulate(v.begin(),v.end(),0)<s){
        cout << -1 <<endl;
    }else if(accumulate(v.begin(),v.end(),0) == s){
        cout << 0 <<endl;
    }else{
        while(accumulate(v.begin(),v.end(),0) > s){
            if(vh.front() <= abs(vh.back()-(n-1))){
                if(vh.front() == 0) {count++;}
                else{count += vh.front();}
                v[vh.front()] = 0;
                vh.pop_front();
            }else{
                if(abs(vh.back()-(n-1)) == 0) {count++;}
                else{count += abs(vh.back()-(n-1));}
                v[vh.back()] = 0;
                vh.pop_back();
            }
        }
        if(accumulate(v.begin(),v.end(),0) == s){
            cout << count << endl;
        }
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
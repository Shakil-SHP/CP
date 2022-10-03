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
    vll v,neg;
    ll sum = 0;
 
    FORN(i,n){
        ll num;
        cin >> num;
        sum += num;
        if(sum > 0){
            v.push_back(num);
        }else{
            sum -= num;
            neg.push_back(num);
        }
    }
    
    if(sum > 0){
        FORN(i,neg.size()){
            sum+=neg[i];
            if(sum >= 0){
                v.push_back(neg[i]);
            }else{
                (sum-=neg[i]);
            }
            if(sum == 0) break;
        }
    }

    cout << v.size() <<"\n";
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solve();
	
	return 0;
}
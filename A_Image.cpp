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
	string s1,s2;
    cin >> s1 >> s2;
    map<char,int> mp;

    mp[s1[0]]++;
    mp[s1[1]]++;

    mp[s2[0]]++;
    mp[s2[1]]++;

    auto mx = max_element(mp.begin(),mp.end(),[] (const std::pair<char,int>& a, const std::pair<char,int>& b)->bool{ return a.second < b.second; });
    
    bool flag =false;
    for(auto x : mp){
        if((x.second == 2) && (x.first != mx->first)){
            flag = true;
        }
    }
    if(flag){
        cout << 3-(mx->second)<<endl;
    }else{
        cout << 4-mx->second<<endl;
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
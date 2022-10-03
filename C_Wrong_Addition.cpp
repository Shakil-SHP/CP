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

    // string a,b,c;
    ll a,b,c=0;
    cin >> a >> b;
    // while(a.size()<b.size()){
    //     a = '0'+a;
    // }
    // int i = b.size();
    // while(i >= 0){
    //     if(b[i] >= a[i]){
    //         ll num = ((b[i]-'0') - (a[i] - '0'));
    //         c += '0' + num;
    //         i--;
    //     }else{
    //         ll num = ((b[i-1]-'0')*10+(b[i]-'0')) - (a[i]-'0');
    //         if(num >=10 && num <= 18)
    //             c += '0' + num;
    //         else{
    //             cout << -1 <<endl;
    //             return;
    //         }
    //         i-=2;
    //     }
    // }

    // cout << c << endl; 

    while(b>0){
        if(b%10 >= a%10){
            ll num = b%10 - a%10;
            c = num;
            a/=10;
            b/=10;
        }else if(b%10 < a%10){
            if((b%100 >= a%10) && (b%100 >=10 && b%100 <=18)){
                ll num = b%100 - a%10;
                c = c + num*10;
                a/=10;
                b/=100;
                if(b==0 && a!=0){
                cout << -1 <<endl;
                return;
                }
            }else{
                cout << -1 <<endl;
                return;
            }
        }
    }
    cout << c << endl;
	
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
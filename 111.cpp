#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std; 
typedef unsigned int uint; // 0 - 4,294,967,295 
typedef long long i64;           //  +-  9,223,372,036,854,775,783 < 10 ** 19 
typedef unsigned long long ui64; // 0 - 18,446,744,073,709,551,557 < 10 ** 20 
typedef pair<int, int> pii; 
typedef map<int, int>  mii; 
typedef vector<int> vec; 
typedef vector<vec> mat; 
typedef vector<string> ves; 
#define REP(i, k, n) for(int i=(k); i<(n); i++) 
#define rep(i, n) REP(i, 0, n) 
#define rec(container, it) for(__typeof(container.begin()) it=container.begin(); it!=container.end(); it++)
#define all(v) v.begin(), v.end() 
#define pb push_back 

i64 gcd(i64 a, i64 b) { return b == 0LL ? a : gcd(b, a%b); } 
i64 lcm(i64 a, i64 b) { return a * b / gcd(a, b); } 
string i2s(int i) { stringstream ss; ss << i; return ss.str(); } 
int s2i(string s) { stringstream ss; ss << s; int res; ss >> res; return res; } 
const int INF = 987654321; 
const double EPS = 1e-9; 
int main()
{
     int n;cin>>n;
     ves mp3;
     rep(i,n){mp3.pb(i2s(i+1) +".mp3");}
     sort(all(mp3));
     int mn=min(n,50);
    ves res;
    rep(i,mn){res.pb(mp3[i]);}
    rep(i,mn) cout<<res[i]<<endl;
     return 0;
}

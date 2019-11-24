#include <bits/stdc++.h>
using namespace std;
#define ff(x, n) for (int x = 1; x < n; ++x)
#define fr(x, n) for (int x = n; x >= 0; --x
#define forn(i, n) for(int i = 0; i < n; i++)
#define for1(i, n) for(int i = 1; i <= n; i++)
#define fe(i, a) for (int i : a)
#define ins(s1, len) string s1;cin >> s1;int len = s1.length();
#define is(s1) cin >> s1;
#define ini(i) int i;cin >> i;
#define ii(i) cin >> i;
#define i(i) int i = 0;
#define d(i) cout << "#Debug value ::" << i << "\n";
#define so(str) cout << str << "\n";
#define sdec(v) sort(v.begin(), v.end(), greater<>());
#define sass(v) sort(v.begin(), v.end());
#define pb push_back
#define mkpr make_pair
#define pii pair<int, int>
#define pci pair<char, int>
#define PI acos(-1)
#define ll long long
#define vi(v) vector<int> v;
#define vc(v) vector<char> v;
#define mci(name) map<char, int> name;
#define mii(name) map<int, int> name;
#define sni(s) set<int> s;
#define snc(s) set<char> s;
#define printArr(a, al) for (int i = 0; i < al; i++){cout << a[i] << " ";}cout << "\n";
#define inputArr(a, al) for (int i = 0; i < al; i++){ini(x);a.push_back(x);}
#define testcaseinput int __testcase;cin >> __testcase;while (__testcase--)
#define ready() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define randrange(a, b) rand() % (b - a + 1) + a
#define setDP  memset(dp, -1, sizeof(dp));
#define all(x)     x.begin(), x.end()
#define dbg(args...)    {string sss(#args);sss+=',';cerr<<"-->";debugger::call(all(sss), args);cerr<<"\n";}
#define dbgA(A, n)      {cerr<<"-->"<<#A<<"=(";forn(i, n)cerr<<A[i]<<" ";cerr<<")\n";}
#define dbgA2(A, n, m)  {cerr<<"-->"<<#A<<"=\n";forn(i, n){forn(j, m){cerr<<setw(4)<<A[i][j]<<" ";}cerr<<"\n";}cerr<<"\n";}

struct debugger{
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
        string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cerr << b << " = " << a << " ";
        call(++it, ed, rest...);
    }
};
int d[10000], par[10000];
int find(int x) {
    return par[x] == x ? x : par[x] = find(par[x]);
}
void _union(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) {
        par[x] = y;
        d[y] += d[x];
    }

}
int main() {
	ready()
    while(1) {
        int c, r;cin >> c >> r;
        if(c == 0 && r == 0 || c == 0) break;
        else {
            map<string, int> chain;
            for(int i = 0; i < c; i++) {
                string name;cin >> name;
                chain[name] = i;
                par[i] = i;
                d[i] = 1;
            }
            for(int i = 0; i < r; i++) {
                string inferior;cin >> inferior;
                string predator;cin >> predator;
                _union(chain[inferior], chain[predator]);
            }
            int a = 0;
            for(int i = 0; i < c; i++) {
                if(d[i] > a) {
                    a = d[i];
                }
            }
            //dbgA(d, 20);
            cout << a << "\n";
        }
    }
	return 0;
}

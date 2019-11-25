#include <bits/stdc++.h>
using namespace std;
//Happy Coding... Stop running behind girls rather sit down and code.. They'll run behind you! 😎😁
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
#define mp make_pair
#define pii pair<int, int>
#define pci pair<char, int>
#define PI 3.1415926535897932384626433832795
#define vi(v) vector<int> v;
#define ll long long
#define lli long long int
#define vc(v) vector<char> v;
#define mci(name) map<char, int> name;
#define mii(name) map<int, int> name;
#define sni(s) set<int> s;
#define snc(s) set<char> s;
#define printArr(a, al) for (int i = 0; i < al; i++){cout << a[i] << " ";}cout << "\n";
#define inputArr(a, al) for (int i = 0; i < al; i++){ini(x);a.push_back(x);}
#define testcaseinput int __testcase;cin >> __testcase;while (__testcase--)
#define smartinput int __testcase;cin >> __testcase;for(int _t = 1; _t <= __testcase; _t++)
#define ready() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define randrange(a, b) rand() % (b - a + 1) + a
#define setDP  memset(dp, -1, sizeof(dp));
#define all(x)     x.begin(), x.end()
#define dbg(args...)    {string sss(#args);sss+=',';cerr<<"-->";debugger::call(all(sss), args);cerr<<"\n";}
#define dbgA(A, n)      {cerr<<"-->"<<#A<<"=(";forn(i, n)cerr<<A[i]<<" ";cerr<<")\n";}
#define dbgA2(A, n, m)  {cerr<<"-->"<<#A<<"=\n";forn(i, n){forn(j, m){cerr<<setw(4)<<A[i][j]<<" ";}cerr<<"\n";}cerr<<"\n";}
#define READ                  freopen("input.txt", "r", stdin);
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}

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

bool sieve(int n) {
    n++;
    vector<int> is_prime(n, 1);
    is_prime[0] = 0; is_prime[1] = 0;
    int i=2;
    while(i*i <= n) {
        if(is_prime[i] == 0) {
            i++;
            continue;
        }
        int j = 2*i;
        while(j < n) {
            is_prime[j] = 0;
            j += i;
        }
        i++;
    }
    if(is_prime[n-1] == 1) return true;return false;
}


vector<int> plusOne(vector<int>& digits) {
    for(int i = digits.size() - 1; i >= 0; i--) {
        if(digits[i] != 9) {
            digits[i]++;
            return digits;
        }else {
            digits[i] = 0;
        }
    }
    if(digits[0] == 0) {
        digits.insert(digits.begin(), 1);
    }
    return digits;
}

int main() {
    vector<int> num;
    num.push_back(9);
    num.push_back(9);
    num.push_back(9);
    num.push_back(9);
    num = plusOne(num);
    printArr(num, num.size())
    

}


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;

#define el '\n'
#define sp ' '
#define enl cout<<"\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
double eps = 1e-7;

void solve()
{
    int n,s1=0,s2=0,s3=0;
    cin >>n;

    for (int i=0;i<n;i++){
        int val;
        cin >>val;
        s1+=val;
    }

    for (int i=0;i<n-1;i++){
        int val;
        cin >>val;
        s2+=val;
    }

    for (int i=0;i<n-2;i++){
        int val;
        cin >>val;
        s3+=val;
    }
    cout<<s1-s2<<el<<s2-s3<<el;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1,i=1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}


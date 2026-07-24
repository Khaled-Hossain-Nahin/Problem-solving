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

void solve() {
    int n; cin >>n;
    vector<int>vec(n);

    for (int i=0;i<n;i++)
        cin>>vec[i];

    int even=0,odd=0;
    bool e=true;

    for(int i=0;i<n;i++){
        if(vec[i]%2==0) even++;
        else odd++;

        if(even>1){
            e=false;
            break;
        }

    }

    if(e){
        for(int i=0;i<n;i++){
            if(vec[i]%2==0){
                cout<<i+1<<el;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(vec[i]%2!=0){
                cout<<i+1<<el;
            }
        }
    }



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


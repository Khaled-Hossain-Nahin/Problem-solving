
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

bool solve()
{
    string s,sbi,cpp;
    cin>>s>>sbi;

    vi vec;
    int k=0;
    for(int i=0; i<4; i++)
    {
        while(k<s.size() && s[k]!='.')
        {
            cpp+=s[k];
            k++;
        }
        k++;
        int val =stoi(cpp);
        vec.pb(val);
        cpp.clear();
    }

    string cpy;
    vi vec2;
    int i=0;
    for(int j=0; j<4; j++)
    {
        while(i < sbi.size() && sbi[i] != '.')
        {
            cpy+= sbi[i];
            i++;
        }
        i++;
        int val =stoi(cpy,nullptr,2);
        vec2.pb(val);
        cpy.clear();
    }

    for (int j=0; j<vec.size(); j++)
    {
        if(vec[j]!=vec2[j])
        {

            return false;
        }
    }

    return true;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1,i=1;
    cin >> t;
    while (t--)
    {
        if(solve()) cout<<"Case "<<i<<": Yes\n";
        else cout<<"Case "<<i<<": No\n";
        i++;
    }

    return 0;
}


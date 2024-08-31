#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve(){
    ll n; cin >> n;
    vector<ll> a(n), res;
    ll pos = 0, neg = 0, z = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] != 0 || z < 1){
            res.pb(a[i]);
        }
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else z++;
    }

    if(pos > 2 || neg > 2){
        cout << "NO" << endl;
        return;
    }

    set<ll> st(res.begin(), res.end());

    for(int i = 0; i < res.sz; i++){
        for(int j = i + 1; j < res.sz; j++){
            for(int k = j + 1; k < res.sz; k++){
                ll sm = res[i] + res[j] + res[k];
                if(st.find(sm) == st.end()){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;
}

int main() {
    Fast_Code;
    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}

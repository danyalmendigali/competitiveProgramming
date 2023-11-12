#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

// Обход дерева dfs

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

vector<vector<int>> adj(N);
vector<int> path;

set<int> st;
map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

struct Node{
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

void insert(Node*& node, int value){
    if(!node){
        node = new Node(value);
    }
    else if(value < node -> value){
        insert(node -> left, value);
    }
    else if(value > node -> value){
        insert(node -> right, value);
    }
}

int height(Node* node){
    if(!node){
        return 0;
    }

    int leftHeight = height(node -> left);
    int rightGeight = height(node -> right);

    return max(leftHeight, rightGeight) + 1;
}

void solve() {
    Node* root = nullptr;

    int num;
    cin >> num;
    while(num != 0){
        insert(root, num);
        cin >> num;
    }

    cout << height(root) << endl;

}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}

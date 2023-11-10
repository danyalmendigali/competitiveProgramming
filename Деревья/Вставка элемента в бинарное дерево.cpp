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

// Обход дерева bfs

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

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int value) {
    if(root == nullptr){
        return new TreeNode(value);
    }


    if(value <= root -> data){
        root -> left = insert(root -> left, value);
    }
    else{
        root -> right = insert(root -> right, value);
    }

    return root;
}

TreeNode* createBinaryTree() {
    TreeNode* root = nullptr;
    int n;
    cout << "Enter size binary tree: ";
    cin >> n;

    cout << "Enter element binary tree: ";
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        root = insert(root, value);
    }

    return root;
}


void solve()
{

    TreeNode* root = createBinaryTree();

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

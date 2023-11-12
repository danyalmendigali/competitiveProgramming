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

// ---

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

void insert(Node*& node, int value_input){
    if(!node){
        node = new Node(value_input);
    }
    else if(value_input < node -> value){
        insert(node -> left, value_input);
    }
    else if(value_input > node -> value){
        insert(node -> right, value_input);
    }
}

Node* findMin(Node* node) {
    while (node -> left != nullptr) {
        node = node -> left;
    }
    return node;
}

Node* remove(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }

    if (key < root -> value){
        root -> left = remove(root -> left, key);
    }
    else if(key > root -> value){
        root -> right = remove(root -> right, key);
    }
    else{
        if(root -> left == nullptr){
            Node* temp = root -> right;
            delete root;
            return temp;
        } else if (root -> right == nullptr) {
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root -> right);
        root -> value = temp -> value;

        root -> right = remove(root -> right, temp -> value);
    }

    return root;
}

int height(Node* node){
    if(!node){
        return 0;
    }

    int leftHeight = height(node -> left);
    int rightGeight = height(node -> right);

    return max(leftHeight, rightGeight) + 1;
}

int diameter(Node* node) {
    if (!node) {
        return 0;
    }

    int leftDiameter = diameter(node -> left);
    int rightDiameter = diameter(node->right);

    int leftHeight = height(node -> left);
    int rightHeight = height(node -> right);

    int diameterThroughCurrentNode = leftHeight + rightHeight + 1;

    return max({diameterThroughCurrentNode, leftDiameter, rightDiameter});
}


void solve() {
    Node* root = nullptr;

    int num;
    cin >> num;
    while (num != 0) {
        insert(root, num);
        cin >> num;
    }
    int a;
    for(int i = 0; i < 3; i++){
        cin >> a;
        remove(root, a);
    }

    int result = diameter(root);
    cout << "Height: " << height(root) << endl;
    cout << "Diameter: " << diameter(root) << endl;
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

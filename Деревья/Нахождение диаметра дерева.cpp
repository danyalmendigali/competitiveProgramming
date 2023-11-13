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

// Структура узла
struct Node{
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Добавленте узла в BST
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

// Нахождение минимального узла в BST
Node* findMin(Node* node) {
    while (node -> left != nullptr) {
        node = node -> left;
    }
    return node;
}

// Функция удаления узла в BST
Node* remove(Node* node, int key) {
    if (node == nullptr) {
        return node;
    }

    if (key < node -> value){
        node -> left = remove(node -> left, key);
    }
    else if(key > node -> value){
        node -> right = remove(node -> right, key);
    }
    else{
        if(node -> left == nullptr){
            Node* temp = node -> right;
            delete node;
            return temp;
        } else if (node -> right == nullptr) {
            Node* temp = node -> left;
            delete node;
            return temp;
        }

        Node* temp = findMin(node -> right);
        node -> value = temp -> value;

        node -> right = remove(node -> right, temp -> value);
    }

    return node;
}

// Функция находит высоту в BST
int height(Node* node){
    if(!node){
        return 0;
    }

    int leftHeight = height(node -> left);
    int rightGeight = height(node -> right);

    return max(leftHeight, rightGeight) + 1;
}

// Функция находит диаметр в BST
int diameter(Node* node) {
    if (!node) {
        return 0;
    }

    int leftDiameter = diameter(node -> left);
    int rightDiameter = diameter(node -> right);

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

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
#include <iomanip>
#include <chrono>
#include <random>
#include <algorithm>

using namespace std;
using namespace::chrono;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const int test = 1e4;

int binSearch(vector<int>& a, int numSearch)
{
              int l = 0, mid = 0, num = 0, h = a.sz - 1;
              while(l <= h){
                     mid = (l + h) / 2;
                     cout << a[mid] << endl;
                     num = a[mid];
                     if(num == numSearch) return mid + 1;
                     if(num > numSearch) h = mid - 1;
                     else l = mid + 1;
              }
              return 0;
}

int GetRandomInt(int mn, int mx)
{
       static minstd_rand generator;
       uniform_int_distribution<int> distribution(mn, mx);
       return distribution(generator);
}

int linerSearch(vector<int>& a, int num)
{
       int index = find(all(a), num) - a.begin();
       if(index == a.sz){
              return -1;
       }
       return index;
}

vector<int> randVector(int size_a, int mn, int mx)
{
       vector<int> a(size_a);
       for(int &element : a){
              element = GetRandomInt(mn, mx);
       }
              sort(all(a));
              return a;
}

void testCorrectVector(int size_a, int mn, int mx)
{
       vector<int> a = randVector(size_a, mn, mx);
       int num = GetRandomInt(mn, mx);
       int index = binSearch(a, num);
       if(index != -1 && a[index] != num){
              cout << "ERROR!\n";
       }
       if(index == -1 && linerSearch(a, num) != -1){
              cout << "ERROR!\n";
       }
}

void multiTestsBinSerach(int testCount, int size_a, int mn, int mx)
{
       for(int test = 0; test < testCount; test++){
             testCorrectVector(size_a, mn, mx);
       }
}

template<typename SearchFunction>
ll getSearchTime(SearchFunction search, vector<int>& a, int num)
{
       auto t1 = steady_clock::now();
       binSearch(a, num);
       auto t2 = steady_clock::now();
       return duration_cast<nanoseconds>(t2 - t1).count();
}

void prinTimeTable()
{
       for(int i = 1e4; i < 1e6; i += 1e4){
              vector<int> a = randVector(i, -1e9, 1e9);
              int num = 2e9;
              double linerTime = 0, binAverage = 0;
              for(int j = 0; j < test; j++){
                     linerTime += getSearchTime(linerTime, a, num);
                     binAverage += getSearchTime(binSearch, a, num);
              }
              linerTime /= test;
              binAverage /= test;

              cout << setw(10) << right << i;
              cout << setw(10) << right << fixed << setprecision(0) << linerTime;
              cout << setw(10) << right << fixed << setprecision(0) << binAverage << "\n";
       }
}


void solve()
{
       /*
       int n, num; cin >> n >> num;
       vector<int> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       cout << binSearch(a, num);
       */
       prinTimeTable();




}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
    int n;
    cin >> n;

    vector <int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int X;
    cin >> X;
<<<<<<< HEAD
    int closest = A[0]; // íà÷àëüíîå çíà÷åíèå áëèæàéøåãî ýëåìåíòà ðàâíî ïåðâîìó ýëåìåíòó âåêòîðà

        for(int i = 1; i < n; i++) {
            if(abs(A[i] - X) < abs(closest - X)) { // åñëè íàøëè ýëåìåíò, êîòîðûé áëèæå ê X
                closest = A[i]; // îáíîâëÿåì çíà÷åíèå áëèæàéøåãî ýëåìåíòà
            }
            else if(abs(A[i] - X) == abs(closest - X) && A[i] < closest) {  // åñëè åñòü íåñêîëüêî áëèæàéøèõ ýëåìåíòîâ
                closest = A[i]; // âûáèðàåì ìèíèìàëüíûé
=======
    int closest = A[0] ; // Ð½Ð°Ñ‡Ð°Ð»ÑŒÐ½Ð¾Ðµ Ð·Ð½Ð°Ñ‡ÐµÐ½Ð¸Ðµ Ð±Ð»Ð¸Ð¶Ð°Ð¹ÑˆÐµÐ³Ð¾ ÑÐ»ÐµÐ¼ÐµÐ½Ñ‚Ð° Ñ€Ð°Ð²Ð½Ð¾ Ð¿ÐµÑ€Ð²Ð¾Ð¼Ñƒ ÑÐ»ÐµÐ¼ÐµÐ½Ñ‚Ñƒ Ð²ÐµÐºÑ‚Ð¾Ñ€Ð°

        for(int i = 1; i < n; i++) {
            if(abs(A[i] - X) < abs(closest - X)) { / ÐµÑÐ»Ð¸ Ð½Ð°ÑˆÐ»Ð¸ ÑÐ»ÐµÐ¼ÐµÐ½Ñ‚, ÐºÐ¾Ñ‚Ð¾Ñ€Ñ‹Ð¹ Ð±Ð»Ð¸Ð¶Ðµ Ðº X
                closest = A[i]; // Ð¾Ð±Ð½Ð¾Ð²Ð»ÑÐµÐ¼ Ð·Ð½Ð°Ñ‡ÐµÐ½Ð¸Ðµ Ð±Ð»Ð¸Ð¶Ð°Ð¹ÑˆÐµÐ³Ð¾ ÑÐ»ÐµÐ¼ÐµÐ½Ñ‚Ð°
            }
            else if(abs(A[i] - X) == abs(closest- X) && A[i] < closest) { // ÐµÑÐ»Ð¸ ÐµÑÑ‚ÑŒ Ð½ÐµÑÐºÐ¾Ð»ÑŒÐºÐ¾ Ð±Ð»Ð¸Ð¶Ð°Ð¹ÑˆÐ¸Ñ… ÑÐ»ÐµÐ¼ÐµÐ½Ñ‚Ð¾Ð²
                closest = A[i]; // Ð²Ñ‹Ð±Ð¸Ñ€Ð°ÐµÐ¼ Ð¼Ð¸Ð½Ð¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹
>>>>>>> a95a5081f01bb1d1c7822fb23eda3c2da68730f3
            }
        }

    cout << closest;




}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    /*int t;
    cin >> t;
    while(t--)
        */
     solve();




    return 0;
}


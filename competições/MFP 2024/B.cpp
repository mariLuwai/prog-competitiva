#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
#define Fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const int limite = 1e6;





void solve(){
    vector<pair<int,int>> coord(4);
    int difx;
    for(int i = 0; i<4; i++){
        int aux1, aux2; cin >> aux1 >> aux2;
        coord[i].first = aux1;
        coord[i].second = aux2;
        if((coord[i].first != coord[i-1].first) && i>0) difx = abs(coord[i].first - coord[i-1].first); //lado do quadrado
    }

        cout << difx*difx << "\n";

}



int main(){
    Fastio;
        solve();

    return 0;
}

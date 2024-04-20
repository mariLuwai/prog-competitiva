#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define Fastio ios_base::sync_with_stdio(false); cin.tie(NULL)






int main(){
    Fastio;
	  int n; cin >> n;
    int tam = pow(2,n);
    vector<ll> moedas(tam), acumulado(tam);

    for(int i = 1; i<tam; i++){ //indexado em 1
        cin >> moedas[i];
        acumulado[i] += acumulado[i/2] + moedas[i]; //vetor com os acumulados de cada passo (2i e 2i+1)
    }
    
    int maior = 0;
    for(int i = 1; i<tam; i++){
        if(maior<acumulado[i]) maior = acumulado[i];
    }
    
    cout << maior << "\n";

	return 0;
} 

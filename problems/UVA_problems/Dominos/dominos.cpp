//dominos
// Jonathan Zapata

//

/**
http://www.banrep.gov.co/es/contenidos/page/qu-balanza-pagos
http://www.banrep.gov.co/sites/default/files/paginas/ibp_ene_jun_2016.pdf
http://www.banrep.gov.co/sites/default/files/paginas/Metodologia_Balanza_Pagos.pdf
http://www.gerencie.com/balanza-de-pagos.html
http://www.banrep.gov.co/es/balanza-pagos
http://www.banrepcultural.org/blaavirtual/ayudadetareas/economia/balanza_de_pagos
https://debitoor.es/glosario/definicion-balanza-de-pagos
https://es.wikipedia.org/wiki/Balanza_de_pagos#La_balanza_de_pagos_y_la_residencia
http://www.monografias.com/trabajos5/balpag/balpag.shtml#supera
http://www.uam.es/personal_pdi/economicas/laurap/EEM/4-Balanza%20de%20Pagos.pdf
https://aprendeconomia.wordpress.com/2010/06/28/3-la-balanza-de-pagos/

Lo que me toco
http://www.banrep.gov.co/sites/default/files/paginas/Metodologia_Balanza_Pagos.pdf
http://www.banrep.gov.co/sites/default/files/paginas/ibp_ene_jun_2016.pdf

*/

/**#include <exception>
#include <iostream>*/
#include <vector>
//#include <algorithm>

using namespace std;

#define MAXN 100
#define D(x) cout << #x << " " << x <<endl

vector<int> g[MAXN], gRev[MAXN];
//, ans[MAXN];
/*
int nodes = 0;
int aristas=0;
int inputs=0;
bool state[MAXN];
*/

void dfs(int u){
	//state[u] = true;
	for(int i = 0; i < g[u].size(); ++i){
		int nextNode = g[u][i];
		if(!state[nextNode]) dfs(nextNode);		
	}
	ans[inputs].push_back(u+1);
}

void sortTop(int n){
	for(int i = 0; i < n; ++i ) state[i] = false;
	for(int i = 0; i < n; ++i){
		if(!state[i]) dfs(i);
	}
	reverse(ans[inputs].begin(), ans[inputs].end());
}

int main(){
	try{
		
		cin >> nodes >> aristas;
		
		while(nodes!=0 or aristas!=0){
			for(int i=0; i<MAXN; ++i) g[i].clear();
			
			while(aristas--){
				int x,y;
				cin >> x >> y;
				x--;y--;
				g[x].push_back(y);
			}
			sortTop(nodes);
			
			
			cin >> nodes >> aristas;
			inputs++;
		}
		
		
		for(int i=0; i<inputs; ++i){
			for(int j=0;j<ans[i].size()-1; ++j){
				cout << ans[i][j] << " ";
			}
			cout << ans[i][ans[i].size()-1];
			cout << endl;
		}
		//cout << endl;
	}catch(exception& e){
		cout << "Standard Exception"  << endl;
	}
}

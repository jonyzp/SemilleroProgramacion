//  Jonathan Zapata
//#include <bits/stdc++.h>
#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXN 100
#define D(x) cout << #x << " " << x <<endl

vector<int> g[MAXN], ans;

bool state[MAXN];

void dfs(int u){
	state[u] = true;
	for(int i = 0; g[u].size(); ++i){
		int nextNode = g[u][i];
		if(!state[nextNode]) dfs(nextNode);		
	}
	ans.push_back(u);
}

void sortTop(int n){
	for(int i = 0; i<= n; ++i ) state[i] = false;
	for(int i = 0; i < n; ++i){
		if(!state[i]) dfs(i);
	}
	reverse(ans.begin(), ans.end());
}

int main(){
	try{
		int n;
		cin >> n;
		int nodes = n;
		while(n--){
			int x,y;
			cin >> x >> y;
			g[x].push_back(y);
		}
		
		
		
		D(g);
		
		sortTop(nodes);
		for(int i = 0; i < ans.size(); ++i){
			cout << ans[i] << " ";
			cout << endl;
		}
	}catch(exception& e){
		cout << "Standard Exception"  << endl;
	}
}

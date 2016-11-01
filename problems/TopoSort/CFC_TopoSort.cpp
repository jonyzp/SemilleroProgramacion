//CFC_TopoSort.cpp
//Jonathan Zapata

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXN 100005
#define D(x) cout << #x << " " << x << endl

vector<int> topoSort;
vector<int> g[MAXN], gr[MAXN];
int scc[MAXN], ne[MAXN];
bool state[MAXN];

void dfs(int u) {
  state[u] = true;
  for(int i = 0; i < g[u].size(); ++i) {
    int next = g[u][i];
    if(!state[next]) dfs(next);
  }
  topoSort.push_back(u);
}

void topologicalSort(int n) {
  for(int i = 0; i <= n; ++i) state[i] = false;
  for(int i = 0; i < n; ++i) if(!state[i]) dfs(i);
  reverse(topoSort.begin(), topoSort.end());
}

void dfs2(int u, int currComp) {
  //printf("Node: %d with comp: %d\n", u, currComp);
  scc[u] = currComp;
  for(int i = 0; i < gr[u].size(); ++i) {
    int next = gr[u][i];
    if(scc[next] == -1) dfs2(next, currComp);
  }
}

int kosaraju(int n) {
  for(int i = 0; i <= n; ++i) scc[i] = -1;
  topologicalSort(n);
  int currComp = 0;
  for(int i = 0; i < topoSort.size(); ++i) {
    int currNode = topoSort[i];
    if(scc[currNode] == -1) {
      dfs2(topoSort[i], currComp);
      currComp++;
    }
  }
  return currComp;
}

void clean(int n) {
  for(int i = 0; i <= n; ++i) {
    g[i].clear();
    gr[i].clear();
  }
  topoSort.clear();
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    clean(n);
    for(int i = 0; i < m; ++i) {
      int x, y;
      cin >> x >> y;
      x--; y--;
      //printf("Conn %d to %d\n", x, y);
      g[x].push_back(y);
      gr[y].push_back(x);
    }
    int nComp = kosaraju(n);
    //D(nComp);
    for(int i = 0; i <= nComp; ++i) ne[i] = 0;
    //for(int i = 0; i < n; ++i) printf("Node: %d with SCC: %d\n", i, scc[i]);
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < g[i].size(); ++j) {
        int currNode = g[i][j];
        if(scc[i] != scc[currNode]) ne[scc[currNode]]++;
      }
    }
    int ans = 0;
    for(int i = 0; i < nComp; ++i) {
      if(!ne[i]) ans++;
    }
    cout << ans << endl;
  }
}

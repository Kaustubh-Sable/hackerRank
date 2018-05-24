#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

#define MAX 100001
#define INF (1<<20)
#define pii pair< int, int >
#define pb(x) push_back(x)

struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};

int D[MAX];
bool F[MAX];

int main() {
    int t, i, u, v, w=6, sz, nodes, edges, starting;
    scanf("%d",&t);
 while(t--)
 {  scanf("%d %d", &nodes, &edges);
priority_queue< pii, vector< pii >, comp > Q;
vector< pii > G[MAX];
    for(i=0; i<edges; i++) {
        scanf("%d %d", &u, &v);
        G[u].pb(pii(v, w));
        G[v].pb(pii(u, w)); // for undirected
    }
    scanf("%d", &starting);

    // initialize distance vector
    for(i=1; i<=nodes; i++)
{ D[i] = INF; F[i] = 0;	}
    D[starting] = 0;
    Q.push(pii(starting, 0));

    while(!Q.empty()) {
        u = Q.top().first;
        Q.pop();
        if(F[u]) continue;
        sz = G[u].size();
        for(i=0; i<sz; i++) {
            v = G[u][i].first;
            w = G[u][i].second;
            if(!F[v] && D[u]+w < D[v]) {
                D[v] = D[u] + w;
                Q.push(pii(v, D[v]));
            }
        }
        F[u] = 1; // done with u
    }

    // result
    for(i=1; i<=nodes; i++) 
  if(i!=starting)
  {
if(D[i]==INF)
  printf("-1 ");
else
  printf("%d ", D[i]);
      }
printf("\n");
  }
return 0;
}

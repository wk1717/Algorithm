
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 987654321;
vector<pair<int, int>> graph[20001];
vector<int> dist(20001, INF);
int V, E, K;

void shortestpath() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[K] = 0;
    pq.push({ 0, K });

    while (!pq.empty()) {
        int currentdist = pq.top().first;
        int currentvertex = pq.top().second;
        pq.pop();

        if (currentdist > dist[currentvertex]) continue;

        for (int j = 0; j < graph[currentvertex].size(); j++) {
            int nextvertex = graph[currentvertex][j].first;
            int nextdist = currentdist + graph[currentvertex][j].second;

            if (dist[nextvertex] > nextdist) {
                dist[nextvertex] = nextdist;
                pq.push({ nextdist, nextvertex });
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        if (dist[i] != INF)
            cout << dist[i] << '\n';
        else
            cout << "INF" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;
    cin >> K;

    for (int i = 0; i < E; i++) {
        int s, e, w;
        cin >> s >> e >> w;
        graph[s].push_back({ e, w });
    }

    shortestpath();
}

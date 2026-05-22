// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    vector<int> v(n + 1, 0);

    q.push(1);
    v[1] = 1;
    while (!q.empty())
    {

        int node = q.front();
        q.pop();
        cout << node;
        for (auto it : adj[node])
        {
            if (!v[it])
            {
                q.push(it);
                v[it] = 1;
            }
        }
    }

    return 0;
}
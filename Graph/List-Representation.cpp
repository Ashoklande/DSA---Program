// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
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

    for (auto it : adj)
    {

        for (auto item : it)
        {
            cout << item << " ";
        }
        cout << "\n";
    }

    return 0;
}
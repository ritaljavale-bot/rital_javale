#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <functional>

using namespace std;

int main()
{
    int n, roads;

    cout << "Enter number of cities: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of cities!";
        return 0;
    }

    vector<vector<pair<int, int> > > graph(n);

    cout << "Enter number of roads: ";
    cin >> roads;

    if (roads < 0)
    {
        cout << "Invalid number of roads!";
        return 0;
    }

    cout << "Enter road details (city1 city2 distance):\n";

    for (int i = 0; i < roads; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        if (u < 0 || u >= n || v < 0 || v >= n || w < 0)
        {
            cout << "Invalid road details!";
            return 0;
        }

        graph[u].push_back(make_pair(v, w));
        graph[v].push_back(make_pair(u, w));
    }

    int source, destination;

    cout << "Enter source city (0 to " << n - 1 << "): ";
    cin >> source;

    cout << "Enter destination city (0 to " << n - 1 << "): ";
    cin >> destination;

    if (source < 0 || source >= n ||
        destination < 0 || destination >= n)
    {
        cout << "Invalid city number!";
        return 0;
    }

    vector<int> dist(n, INT_MAX);
    vector<int> parent(n, -1);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int> >,
        greater<pair<int, int> >
    > pq;

    dist[source] = 0;
    pq.push(make_pair(0, source));

    while (!pq.empty())
    {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d != dist[u])
            continue;

        for (int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i].first;
            int w = graph[u][i].second;

            if (dist[u] <= INT_MAX - w &&
                dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;

                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout << "\nShortest distances from city "
         << source << ":\n";

    for (int i = 0; i < n; i++)
    {
        cout << "City " << i << ": ";

        if (dist[i] == INT_MAX)
            cout << "Unreachable\n";
        else
            cout << dist[i] << "\n";
    }

    if (dist[destination] == INT_MAX)
    {
        cout << "\nDestination is unreachable.\n";
    }
    else
    {
        vector<int> path;

        int v = destination;

        while (v != -1)
        {
            path.push_back(v);
            v = parent[v];
        }

        cout << "\nShortest distance to destination: "
             << dist[destination];

        cout << "\nShortest path: ";

        for (int i = path.size() - 1; i >= 0; i--)
        {
            cout << path[i];

            if (i > 0)
                cout << " -> ";
        }

        cout << endl;
    }

    return 0;
}


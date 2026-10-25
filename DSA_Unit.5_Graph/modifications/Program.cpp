#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#define INF INT_MAX

int n;
vector<vector<int> > graph;

void dijkstra(int source, int dist[], int parent[])
{
    bool visited[100] = {false};
    int i, j, u, minDist;

    for (i = 0; i < n; i++)
    {
        dist[i] = INF;
        parent[i] = -1;
    }

    dist[source] = 0;

    for (i = 0; i < n; i++)
    {
        minDist = INF;
        u = -1;

        for (j = 0; j < n; j++)
        {
            if (!visited[j] && dist[j] < minDist)
            {
                minDist = dist[j];
                u = j;
            }
        }

        if (u == -1)
            break;

        visited[u] = true;

        for (j = 0; j < n; j++)
        {
            if (graph[u][j] != INF && !visited[j])
            {
                if (dist[u] + graph[u][j] < dist[j])
                {
                    dist[j] = dist[u] + graph[u][j];
                    parent[j] = u;
                }
            }
        }
    }
}

void displayDistances(int source)
{
    int dist[100], parent[100];

    dijkstra(source, dist, parent);

    cout << "\nShortest Distances from Machine "
         << source << ":\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Machine " << i << " : ";

        if (dist[i] == INF)
            cout << "Unreachable";
        else
            cout << dist[i];

        cout << endl;
    }
}

void displayPath(int source, int destination)
{
    int dist[100], parent[100];
    int path[100], count = 0;
    int current;

    dijkstra(source, dist, parent);

    if (dist[destination] == INF)
    {
        cout << "\nNo path exists between these machines.\n";
        return;
    }

    current = destination;

    while (current != -1)
    {
        path[count++] = current;
        current = parent[current];
    }

    cout << "\nShortest Path: ";

    for (int i = count - 1; i >= 0; i--)
    {
        cout << path[i];

        if (i > 0)
            cout << " -> ";
    }

    cout << "\nTotal Distance: " << dist[destination] << endl;
}

int main()
{
    int links, u, v, weight;
    int source, choice, destination;

    cout << "Enter number of machines: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid number of machines.\n";
        return 0;
    }

    graph.resize(n, vector<int>(n, INF));

    for (int i = 0; i < n; i++)
        graph[i][i] = 0;

    cout << "Enter number of communication links: ";
    cin >> links;

    if (links < 0)
    {
        cout << "Invalid number of links.\n";
        return 0;
    }

    cout << "Enter links (machine1 machine2 distance):\n";

    for (int i = 0; i < links; i++)
    {
        cin >> u >> v >> weight;

        if (u < 0 || u >= n || v < 0 || v >= n ||
            u == v || weight < 0)
        {
            cout << "Invalid link. Enter again:\n";
            i--;
            continue;
        }

        graph[u][v] = weight;
        graph[v][u] = weight;
    }

    cout << "Enter starting machine: ";
    cin >> source;

    if (source < 0 || source >= n)
    {
        cout << "Invalid starting machine.\n";
        return 0;
    }

    displayDistances(source);

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Change Source Machine\n";
        cout << "2. Display Shortest Path\n";
        cout << "3. Update Communication Link\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter new source machine: ";
                cin >> source;

                if (source >= 0 && source < n)
                    displayDistances(source);
                else
                    cout << "Invalid source machine.\n";
                break;

            case 2:
                cout << "Enter destination machine: ";
                cin >> destination;

                if (destination >= 0 && destination < n)
                    displayPath(source, destination);
                else
                    cout << "Invalid destination machine.\n";
                break;

            case 3:
                cout << "Enter two machines for the link: ";
                cin >> u >> v;

                if (u < 0 || u >= n || v < 0 || v >= n ||
                    u == v || graph[u][v] == INF)
                {
                    cout << "Invalid link or link does not exist.\n";
                    break;
                }

                cout << "Enter new distance: ";
                cin >> weight;

                if (weight < 0)
                {
                    cout << "Distance cannot be negative.\n";
                    break;
                }

                graph[u][v] = weight;
                graph[v][u] = weight;

                cout << "Communication link updated successfully.\n";
                displayDistances(source);
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}

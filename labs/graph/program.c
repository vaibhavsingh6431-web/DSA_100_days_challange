#include <stdio.h>
#define MAX 10
int adj[MAX][MAX];   // adjacency matrix
int visited[MAX];
int n;
// ------- BFS -------
void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    queue[rear++] = start;
    visited[start] = 1;
    printf("BFS Traversal: ");
    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);
        for (int i = 0; i < n; i++) {
            if (adj[current][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}
// ---------------- DFS ----------------
void DFS(int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < n; i++) {
        if (adj[vertex][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}
int main() {
    int edges, u, v, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    // initialize adjacency matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;
    // input edges
    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // for undirected graph
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    // BFS
    BFS(start);
    // reset visited for DFS
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    printf("DFS Traversal: ");
    DFS(start);
    printf("\n");

    return 0;
}
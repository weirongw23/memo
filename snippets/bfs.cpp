#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

// Write an algorithm to print the vertices of the graph depth-first
// with every vertex on each line
void dfs(unordered_map<int, vector<int>> &graph, int element) {
    <<<queue<int> q;
    unordered_set<int> s;
    s.insert(element);
    q.push(element);

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();

        for (auto edge : graph[vertex]) {
            if (s.find(edge) == s.end()) {
                s.insert(edge);
                q.push(edge);
            }
        }
    }>>>
}

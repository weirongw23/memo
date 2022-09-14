// Write a recursive algorithm to print the vertices of the graph depth-first
// with every vertex on each line
void dfs(const unordered_map<int, vector<int>> &graph, int vertex) {
  <<<cout << vertex << endl;
  for (auto edge : graph[vertex]) {
    dfs(graph, edge);
  }>>>
}
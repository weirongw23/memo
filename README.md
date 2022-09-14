# Memo

An open-sourced spaced repetition tool for commiting code and computer science concepts to long-term memory.

The program makes you type out the answers to the question, diffs the result, and gives feedback.

# Usage

To practice **code snippets**, enter the following command.

```
./memo --snippets snippets/<snippet>.<language_extension>
```

Here are the list of supported snippets for practice, with all languages following the same convention.
| Topic | File |
| :--- | :----: |
| Depth-First Search | dfs |
| Breadth-First Search | bfs |
| Binary Search | binary_search |
| Union-Find: Rank & Path Compression | union_find |
| Circular Buffer | circular_buffer |
| Dijkstra's Single-Source Shortest Path Algorithm | dijkstra |
| Bellman-Ford (Negative Cycle) | bellman-ford |
| Floyd-Warshall (Transitive Closure) | floyd-warshall |
| Min Trees | min_trees |
| Segment Trees | segment_trees |
| AVL Trees | avl |
| Heaps | heaps |
| Sorting Algorithms | sorting |

To practice **concepts**, enter the following command.

```
./memo --concepts concepts/<snippet>.<language_extension>
```

Here are the list of supported concepts for practice.
**TODO - Coming soon!**

# Language Extensions

-   C++

# Credits

## Authors

-   Weirong Wu (weirongw@umich.edu)
-   Arya Kumar (arkumar@umich.edu)

## Version

0.0.1

## Maintainer

Atlas Digital Consulting Group (atlasdigitalum [at] gmail [dot] com)

# License

MIT License.

Copyright (c) 2022-Present Weirong Wu and Arya Kumar

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

# Memo

An open-sourced spaced repetition tool for commiting code and computer science concepts to long-term memory.

The program makes you type out the answers to the question, diffs the result, and gives feedback.

## Getting Started

To get started, clone the repo by typing (one or the other)

```
# if you're using SSH
git clone git@github.com:weirongw23/memo.git

# if you're using HTTPS
git clone https://github.com/weirongw23/memo.git
```

Once you have it installed, open your favorite terminal (Vim, Emacs, etc.) and navigate to the folder (could be inside "Downloads" if you're on a Mac) by typing

```
cd <location>/memo
```

where `<location>` is your path to memo.

## Usage

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
| Fast Exponentiation | pow |
| Union-Find: Rank & Path Compression | union_find |
| Circular Buffer | circular_buffer |
| Dijkstra's Single-Source Shortest Path Algorithm | dijkstra |
| Bellman-Ford (Negative Cycle) | bellman_ford |
| Floyd-Warshall (Transitive Closure) | floyd_warshall |
| Min Trees | min_trees |
| Segment Trees | segment_trees |
| Square Root Trees | sqrt_trees |
| AVL Trees | avl |
| Heaps | heaps |
| Sorting Algorithms | sorting |

To practice **concepts**, enter the following command.

```
./memo --concepts concepts/<snippet>.<language_extension>
```

Here are the list of supported concepts for practice.
**TODO - Coming soon!**

## Language Extensions

-   C++

## Credits

### Authors

-   Weirong Wu (weirongw@umich.edu)
-   Arya Kumar (arkumar@umich.edu)

### Version

0.0.1

### Maintainer

Atlas Digital Consulting Group (atlasdigitalum [at] gmail [dot] com)

## License

MIT License. Copyright &copy; 2022-Present.

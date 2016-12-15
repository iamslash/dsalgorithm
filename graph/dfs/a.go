package main

import "fmt"

var N = 5
var adj = make([][]int, N)
var discovered = make([]int, N)
var counter = 0

func BuildGraph(n int) {
	for i := 0; i < n; i++ {
		adj[i] = make([]int, N)
		discovered[i] = -1
	}
	counter = 0

	append(adj[0], 1)
	append(adj[1], 2)
	append(adj[1], 3)
	append(adj[2], 3)
}

func Dfs(here int) {
	discovered[here] = counter
	counter += 1
	fmt.Printf("%d ", here)
	for i := 0; i < len(adj); i++ {
		there := adj[here][i]
		if discovered[there] == -1 {
			Dfs(there)
		}
	}
}

func main() {
	BuildGraph(N)
	for i := 0; i < N; i++ {
		if discovered[i] == -1 {
			Dfs(i)
		}
	}
}

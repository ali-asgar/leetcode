// https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
// https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/

#include<iostream> 
#include <list> 

using namespace std; 

class Graph 
{ 
	int V; 
	list<int> *adj; 
	void DFSUtil(int v, bool visited[]);
public: 
	Graph(int V)
	{ 
	    this->V = V; 
	    adj = new list<int>[V]; 
    } 
	void addEdge(int v, int w)
	{ 
	    adj[v].push_back(w);
    } 
	void BFS(int s); 
	void DFS(int v); 
}; 

void Graph::DFSUtil(int v, bool visited[]) 
{ 
    visited[v] = true; 
    cout << v << " "; 

    for(auto i : adj[v]) 
        if(!visited[i]) 
            DFSUtil(i, visited); 
} 

void Graph::DFS(int v) 
{ 
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    DFSUtil(v, visited); 
} 

void Graph::BFS(int s) 
{ 
	bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 

	list<int> queue; 
	visited[s] = true; 
	queue.push_back(s); 

	while(!queue.empty()) 
	{ 
		s = queue.front(); 
		cout << s << " "; 
		queue.pop_front(); 

		for (auto i : adj[s]) 
		{ 
			if (!visited[i]) 
			{ 
				visited[i] = true; 
				queue.push_back(i); 
			} 
		} 
	} 
} 

int main() 
{ 
	Graph g(4); 
	g.addEdge(0, 1); 
	g.addEdge(0, 2); 
	g.addEdge(1, 2); 
	g.addEdge(2, 0); 
	g.addEdge(2, 3); 
	g.addEdge(3, 3); 

	cout << "Following is Breadth First Traversal";
	for(int i = 0; i < 4; i++) {
	    cout << "\n Vertex " << i << " - \t"; 
	    g.BFS(i); 
	}
 
	cout << "\n\nFollowing is Depth First Traversal";
	for(int i = 0; i < 4; i++) {
	    cout << "\n Vertex " << i << " - \t"; 
	    g.DFS(i);
	}
	
	return 0; 
} 

/*
OUTPUT

Following is Breadth First Traversal                                                      
 Vertex 0 -     0 1 2 3                                                                   
 Vertex 1 -     1 2 0 3                                                                   
 Vertex 2 -     2 0 3 1                                                                   
 Vertex 3 -     3                                                                         
                                                                                          
Following is Depth First Traversal                                                        
 Vertex 0 -     0 1 2 3                                                                   
 Vertex 1 -     1 2 0 3                                                                   
 Vertex 2 -     2 0 1 3                                                                   
 Vertex 3 -     3     

*/

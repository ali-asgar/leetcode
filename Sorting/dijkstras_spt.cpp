// https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
// https://www.geeksforgeeks.org/dijkstras-algorithm-for-adjacency-list-representation-greedy-algo-8/
// https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/
// https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-set-in-stl/
// 

// A C++ program for Dijkstra's single source shortest path algorithm. 

#include <limits.h> 
#include <stdio.h> 

#define V 9 

void dijkstra(int graph[V][V], int src) 
{ 
	int dist[V]; 
	bool sptSet[V];

	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX, sptSet[i] = false; 

	dist[src] = 0; 
	
	for (int count = 0; count < V - 1; count++) 
	{ 
		int min = INT_MAX, min_index;

    	for (int v = 0; v < V; v++) 
    		if (!sptSet[v] && dist[v] <= min) 
    			min = dist[v], min_index = v;     
	    
		int u = min_index; 
		sptSet[u] = true; 

		for (int v = 0; v < V; v++) 
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
				&& dist[u] + graph[u][v] < dist[v]) 
				dist[v] = dist[u] + graph[u][v]; 
	} 

	printf("Vertex \t\t Distance from Source\n"); 
	for (int i = 0; i < V; i++) 
		printf("%d \t\t %d\n", i, dist[i]); 
} 

int main() 
{ 
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
						
	dijkstra(graph, 0); 
	return 0; 
} 

/*  OUTPUT

Vertex           Distance from Source                                                                                                                                                
0                0                                                                                                                                                                   
1                4                                                                                                                                                                   
2                12                                                                                                                                                                  
3                19                                                                                                                                                                  
4                21                                                                                                                                                                  
5                11                                                                                                                                                                  
6                9                                                                                                                                                                   
7                8                                                                                                                                                                   
8                14                                                                                                                                                                  
                              
*/                              

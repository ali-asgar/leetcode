
// A Quick implementation of BFS using vectors and queue 

// Modified version of http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/
// Modified version of https://gist.github.com/jatindhankhar/475763812e34edf3903d
// https://www.geeksforgeeks.org/bfs-using-stl-competitive-coding/

# include <iostream>
# include <vector>
# include <list>

using namespace std;

class Graph
{
    vector< vector<int> > Edge;
    vector<bool> visited;
public:

    Graph(int V)
    {
        Edge.resize(V);
        visited.resize(V);
    }

    void add_edge(int v,int w)
    {
        Edge[v].push_back(w);
    }

    void BFS(int s)
    {
        for(auto i : visited) i = false;
        list<int> q;
        visited[s] = true;
        q.push_back(s);
        while (!q.empty())
        {
            s = q.front();
            cout<<s<<" ";
            q.pop_front();
            for(auto i : Edge[s])
            {
                if(!visited[i])
                {
                    visited[i] = true;
                    q.push_back(i);
                }
            }
        }
    }
};

int main()
{
    Graph g(6);
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(2,0);
    g.add_edge(2,3);
    g.add_edge(3,3);
    int v;
    cout<<"Enter vertex from where to perform BFS"<<endl;
    cin>>v;
    g.BFS(v);
}

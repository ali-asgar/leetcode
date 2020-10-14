// https://github.com/PhysicsX/ExampleCode/blob/master/Cpp/numberOfIslands_2.cpp
// https://leetcode.com/problems/number-of-islands/
// g++ -std=c++14 numberOfIslands.cpp -o numberOfIslands

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int result = 0; // number of islands
        if(!grid.size()) 
            return result;
            
        int m = grid.size(), n = grid[0].size();
        vector<pair<int,int>> neighborCorr = {{0,1},{1,0},{0,-1},{-1,0}};
        
        for(int i=0; i<m; i++) 
        {
            for(int j=0; j<n; j++) 
            {
                if(grid[i][j] == '1') 
                {
                    result++;
                    grid[i][j] = '0';
                    queue<pair<int,int>> que;
                    que.push({i,j});
                    
                    while(!que.empty()) 
                    {
                        auto p = que.front();
                        que.pop();
                        
                        for(auto k : neighborCorr) 
                        {
                            int x = p.first + k.first;
                            int y = p.second + k.second;
                            
                            if(x >= 0 && y >= 0 && x < m && y < n
                                && grid[x][y] == '1') {
                                            grid[x][y] = '0';
                                            que.push({x,y});
                            }
                        }
                    }
                }
            }
        }
        return result;
    }
};

// Driver code
int main() {
    
    vector<vector<char>> grid = {
    {'0', '0', '0', '1', '1', '1', '0', '0'},
    {'0', '0', '0', '1', '1', '1', '0', '0'},
    {'0', '0', '0', '0', '0', '0', '0', '0'},
    {'0', '0', '0', '0', '0', '1', '1', '1'},
    {'0', '0', '0', '0', '0', '1', '1', '1'},
    {'0', '1', '1', '0', '0', '0', '0', '0'},
    {'1', '1', '1', '0', '0', '0', '0', '0'},
    {'0', '1', '1', '0', '0', '0', '0', '0'}    
    };
    
    Solution s;
    cout<<s.numIslands(grid)<<endl; //3
    
    return 0;
}

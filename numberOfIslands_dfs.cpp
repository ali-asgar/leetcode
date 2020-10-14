// https://github.com/PhysicsX/ExampleCode/blob/master/Cpp/numberOfIslands_dfs.cpp
// https://leetcode.com/problems/number-of-islands/

class Solution
{
	public:
		void dfs(vector<vector<char>> &map, int x, int y) {
			if(x < 0 || y < 0 || x >= map.size() || y >= map[0].size() || map[x][y] == '0')
				return;
				
			map[x][y] = '0';
			dfs(map, x + 1, y);			
			dfs(map, x - 1, y);
			dfs(map, x, y + 1);
			dfs(map, x, y - 1);
		}
		
		int numIslands(vector<vector<char>> &map) {
			int result = 0;
			
			if(map.size() == 0)
				return result;
			
			for(int i = 0; i < map.size(); i++) {
				for(int j = 0; j < map[0].size(); j++) {
					if(map[i][j] == '1') {
					    
						result++;
						dfs(map,i,j);
					}
				}
			}
			return result;
		}
};

// Driver code
int main() {
	vector<vector<char>> map {
		{'1','0','1','0','1'},
		{'1','0','1','0','1'},
		{'1','0','1','0','1'},
		{'1','0','1','0','1'},
		{'1','0','0','0','0'},
		{'1','0','1','0','1'},
		{'1','0','0','0','1'},
		{'1','0','0','0','1'},
		{'1','0','0','0','1'},
		{'1','0','1','1','1'} };
	
	Solution s;
	cout<<s.numIslands(map)<<endl; // 5
}

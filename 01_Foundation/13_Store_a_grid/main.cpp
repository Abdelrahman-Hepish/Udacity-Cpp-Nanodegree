#include <bits/stdc++.h> 
using namespace std ; 
int main() 
{
	vector<vector<int>> grid {{0, 1, 0, 0, 0, 0},
							{0, 1, 0, 0, 0, 0},
							{0, 1, 0, 0, 0, 0},
							{0, 1, 0, 0, 0, 0},
							{0, 0, 0, 0, 1, 0}} ; 
	for(int i = 0 ; i < grid.size() ; i++) 
	 {
	   for(int j = 0 ; j < grid[i].size() ; j++)
	   	{
	   	  cout << grid[i][j]<<" " ; 
	   	}
	   	cout <<"\n" ; 
	 }
	 return 0 ; 
}


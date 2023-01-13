#include <bits/stdc++.h> 
using namespace std  ;
void printBoard(vector<vector<int>> board)
{
 for(auto row : board ) 
 {
 	for(auto column : row ) 
 		{
 		  cout<<column <<" " ; 
 		}
 	cout<<"\n" ; 
 }
}

int main()
{
 vector<vector<int>> board {{0,1,0,0,0,0} ,
 			 {0,1,0,0,0,0} ,
 			 {0, 1, 0, 0, 0, 0},
             {0, 1, 0, 0, 0, 0},
             {0, 0, 0, 0, 1, 0}};
 printBoard(board) ; 
 return 0 ; 
 }

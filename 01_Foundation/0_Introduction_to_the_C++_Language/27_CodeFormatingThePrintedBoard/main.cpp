#include <fstream>
#include <iostream>
#include <sstream>
/* 
Formatting the Printed Board

0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   0    0   0  ⛰️   0

The board will eventually have more than two cell states as the program becomes more complicated, and it would be nice to add formatting to the printed output of the board to ensure readability as the number of board states increases.

To accommodate more board states and facilitate print formatting, we have provided the State enum with enumerator values kEmpty and kObstacle. In this exercise, you will write a CellString function which converts each State to an appropriate string. In the next exercise, we will update the program to use the enum values and CellString function.
-----------------------------------------------------------------------------------------
To Complete This Exercise:

       -> Write a function CellString which accepts aState as input and returns the following string:
            "⛰️ " if the input equals a kObstacle
            "0 " otherwise.

*/
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

enum class cellState { kEmpty , kObstacle } ; 

vector<int> ParseLine(string line) {
istringstream line_stream(line) ; 
vector<int> v ; 
int n ; char c ; 
while(line_stream >> n >> c && c == ',') 
{
	v.push_back(n) ; 
}
return v ; 
}

vector<vector<int>> ReadBoardFile(string path) {
ifstream new_file ;
vector<vector<int>> board ; 
new_file.open(path) ; 
string s ; 
if(new_file) 
{
 while(getline(new_file,s)) 
 {
  board.push_back(ParseLine(s))  ;
 }
}
return board ;  
}

// TODO: Create the CellString function here,
// using the following return strings:
// "⛰️   "
// "0   "
string CellString(int cell ){
cellState cS ; 
cS = (cell == 1)? cellState::kObstacle : cellState::kEmpty  ;
switch(cS) {
case cellState::kObstacle : 
  return "⛰️   " ; 
case cellState::kEmpty : 
  return "0   " ;      
  }
}
void PrintBoard(const vector<vector<int>> board) {
for(auto row : board) 
{
 for(auto column : row) 
 { 
   cout <<CellString(column) ; 
 }
 cout<<"\n" ; 
}
}
int main() {
  auto board = ReadBoardFile("1.board");
  PrintBoard(board);
}

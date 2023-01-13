/* 
Use the ParseLine Function

Great! With the ParseLine function complete, you can now use it in the ReadBoardFile to process each line of the incoming file. In this exercise, you will do just that: follow the TODOs in the code below, updating both ReadBoardFile and the main function to finish the processing of an external board file.
----------------------------------------------------------------
To Complete This Exercise:

      ->  Update ReadBoardFile to use ParseLine and return the board as a vector<vector<int>>. 
          You can read the TODO comments in the code for step by step instructions.
      ->  Update the main function to pass the results of ReadBoardFile to the PrintBoard function.

*/
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;


vector<int> ParseLine(string line) {
	istringstream line_stream(line) ; 
	int n ; char c ; 
	vector<int> v ; 
	while(line_stream >> n >> c ) 
	{
	  v.push_back(n) ; 
	}
	return v ; 
}

// TODO: Change the return type of ReadBoardFile.
vector<vector<int>> ReadBoardFile(string path) {
  
  // TODO: Declare an empty board variable here with type vector<vector<int>>.
  ifstream new_file ; 
  new_file.open(path) ; 
  string line ; 
  vector<vector<int>> board ; 
  if(new_file) 
  {
    while(getline(new_file,line)) 
    {
  // TODO: Replace the "cout" code with a call to ParseLine for each line and push the results of ParseLine to the back of the board.
     board.push_back(ParseLine(line)) ; 
    }
  }
  // TODO: Return the board variable.
  return board ; 
  }    

void PrintBoard( vector<vector<int>> board) {

for(auto row : board ) 
{
  for(auto column : row ) 
  {
    cout << column <<" "  ;
  } 
  cout << "\n" ; 
}
}
int main() {
   
  // TODO: Store the output of ReadBoardFile in the "board" variable.
  vector<vector<int>> board ;
  board = ReadBoardFile("1.board") ; 
  // TODO: Uncomment PrintBoard below to print "board".
  PrintBoard(board) ; 
  return 0 ;
}

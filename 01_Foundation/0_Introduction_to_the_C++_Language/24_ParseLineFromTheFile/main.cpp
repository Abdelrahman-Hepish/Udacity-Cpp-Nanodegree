/* 
Parse Lines from the File
Now that you are able to read a board line by line from a file, you will want to parse these lines and store them in a vector<int>. In this exercise, you will focus on a helper function to do this string parsing.

We have included a test in the main to ensure that the function is working correctly. If everything works, you should see:
---------------------
TestParseLine: passed
---------------------
===========================================================================================
To Complete This Exercise:

    Write a vector<int> ParseLine function which accepts a string as an argument. Use std::istringstream to parse the line by comma chars, and store the ints in a vector<int>. ParseLine should return the vector after parsing.

Note: you will need to #include <sstream> to use istringstream. Additionally, you may want to add using std::istringstream; to your program. Finally, remember that each line of the board will look something like: 1,0,0,0,0,, so you may want to stream an int and a char with each pass through a while loop.
===========================================================================================
*/
#include <bits/stdc++.h> 
#include "test.h"
using namespace std ; 

vector<int> ParseLine(string s) 
{
 istringstream my_stream(s) ; 
 int n ; char c ; 
 vector<int> line ; 
 while(my_stream>>n>>c) 
 {
  line.push_back(n)  ; 
 }
  return line ; 

}
void readBoardFromfile(string path) 
{
  ifstream newfile; 
  string s ; 
  vector<vector<int>> boardParsed ; 
  newfile.open(path) ; 
  if(newfile)
  {
    while(getline(newfile,s)) 
    {
      boardParsed.push_back(ParseLine(s)) ; 
    }
  }
  for(auto row : boardParsed) 
  {
    for(auto column : row ) 
    { 
      cout<<column <<" " ; 
    }
    cout << "\n" ; 
  }
}
int main() 
{
  readBoardFromfile("1.board") ; 
  return 0 ; 
}


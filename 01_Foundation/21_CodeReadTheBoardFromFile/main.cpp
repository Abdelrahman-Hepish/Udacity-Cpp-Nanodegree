#include <bits/stdc++.h> 
using std::cout ; 
using std::string  ; 
using std::ifstream ; 
void readBoardFile(string path) 
{
  ifstream new_file ; 
  string s ; 
  new_file.open(path) ; 
  if(new_file)
  {
    while(getline(new_file,s))
    {
      cout<<s<<"\n" ; 
    }
  }
}
int main()
{
  readBoardFile("1.board") ; 
  return 0 ; 
}
  

#include <bits/stdc++.h> 
using namespace std ;
int main()
{
 ifstream new_file ; 
 string s ; 
 new_file.open("file.txt") ; 
 if(new_file)
  {
   cout << "File founded \n" ; 
   while(getline(new_file,s) )
   		cout<<s <<"\n"; 
  }
 return 0 ; 
}

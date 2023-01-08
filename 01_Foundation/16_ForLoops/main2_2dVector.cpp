#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    vector <vector<int>> aa {{1,2,3},{4,5},{6,7,8,9}} ; 
    for(auto i : aa )
    {
        for(int j : i )
            cout << j<<" " ; 
        cout<<"\n" ; 
    }
    
}

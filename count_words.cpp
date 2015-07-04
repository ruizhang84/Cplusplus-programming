#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;


/* *********
 INPUT
 c++
 map
 set
 map
 vector
 set
 multiset
 c++
 QUIT
 
 OUTPUT
 0
 0
 0
 1
 0
 1
 0
 1
********** */

int main(){
    multiset <string> s;
    vector <int> count;
    string str;

    do {
        cin >> str;
        count.push_back(s.count(str));
        s.insert(str);
        
    } while (str.compare("QUIT"));
    
    for (vector<int>::iterator iit = count.begin(); iit != count.end()-1; ++iit)
        cout << *iit << endl;

    return 0;
}
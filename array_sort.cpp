#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


/* *********
 INPUT
 5
 1 3 2 1 3
 
 OUTPUT
 1
 2
 3
********** */

int main(){
    int n;
    int s;
    vector <int> x;
    
    cin >> n;
    cin.ignore(); // need to flush the newline out of the buffer in between.
    while(cin >> s){
        x.push_back(s);
    }

    vector<int>::iterator it;
    sort (x.begin(), x.end());
    it = unique (x.begin(), x.end());
    x.resize(distance(x.begin(), it));
    
    
    for (vector<int>::iterator iit=x.begin(); iit!=x.end(); ++iit)
        cout << *iit << endl;
    
    return 0;
}
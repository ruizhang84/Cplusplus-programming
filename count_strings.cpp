#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


/* *********
 INPUT
 ababac
 aba
 
 OUTPUT
 2
********** */

int main(){
    vector <string> str;
    string sub_str;
    
    string s;
    cin >> s;
    cin >> sub_str;
    for (int i = 0; i < s.length()-sub_str.length(); i++){
        str.push_back(s.substr(i, sub_str.length()) );
    }
    

    cout<<count (str.begin(), str.end(), sub_str)<<endl;

    return 0;
}
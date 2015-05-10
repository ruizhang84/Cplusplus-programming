#include <iostream>
#include <string>

using namespace std;

int numSubStr(string s){
    int n = s.length();
    int num = 0;
    int (*dp)[15] ;
    dp = new int[15][15];    
  
    for (int j = 0; j<n; ++j){
         dp[j][j] = 1;
         for (int i = j-1; i>=0; --i){ 
             dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
             if (s[i] == s[j])
                 dp[i][j] += 1+dp[i+1][j-1];
         }
    }
    num = dp[0][n-1];
    delete[] dp;
    return num;
}


int main(){
    string s;

    cin >> s;
    cout<<numSubStr(s)<<endl;
    
    return 0;
}
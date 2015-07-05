#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;


/* *********
 INPUT
 5 3
 12.3456789
 2 10
 12.34
 0 0   !if m,n<-0 then output 0
 12
 100  8
 123.99999999999999999999999999999999(32)
 
 OUTPUT
 00012.345
 12.3400000000
 0
 123.99999999
 ********** */

template <class T>
inline T fromString(const string &str, int n) {
    int found=str.find('.');
    istringstream is(str.substr(0, found+n+1));  //create string stream
    T v;
    is >> v;    // read in the string
    return v;
}

int main(){
    int n;      // precision
    int m;      // int width
    string y;
    double x, f_round;
    
    while(cin >> m >> n){
        cin >> y;
        x = fromString<double> (y, n);
        
        if (m == 0 and n == 0){             // special case m = 0 and n = 0
            cout << 0 << endl;
        }else {
            if (x < 0){                     // special x < 0
                cout << '-';
                x = abs(x);
            }

            f_round  = pow(10, n);
            if ((int)(x * f_round)/f_round - x > -1)    //SPEICAL, number overflow e.g. n > 20
                x = (int)(x * f_round)/f_round;        // stop round
     
            
            if (m == 0){                       // special case m = 0 and n! = 0
                cout.width(n+1);
            }else if (n == 0){                 // special case m != 0 and n = 0
                cout.width(m);
            }else{
                cout.width(m+n+1);
            }
     
            cout.fill ('0');
            cout.setf(ios::fixed, ios::floatfield );  // floatfield set to fixed
            cout << setprecision(n)
            << x << endl;
        }
     }
     
    
    return 0;
}
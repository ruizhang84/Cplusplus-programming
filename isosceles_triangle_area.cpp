#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cmath>

using namespace std;

/* *********
 INPUT
 3 4 5
 
 OUTPUT
 The input is illegal
 ********* */


double calArea(double a, double b, double c) throw (invalid_argument) {
    
    if (a <= 0 || b <= 0 || c <= 0)
        throw invalid_argument("The input is illegal");
    if (a + b <= c || b + c <= a || c + a <= b)
        throw invalid_argument("The input is illegal");
    if (a != b and b != c and a != c)
        throw invalid_argument("The input is illegal");
    
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
    
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    try{
        double area = calArea(a, b, c);
        
        cout << setiosflags(ios_base::fixed);
        cout << setprecision(2) << area << endl;
        
    }catch(exception &e){
        cout << e.what() << endl;
    }
}
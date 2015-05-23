#include <iostream>
using namespace std;

struct Base1
{
 public:
    int x;
    Base1(int x);
};

struct Base2
{
 public:
    int x;
    Base2(int x);
};

struct Derived:public Base1, public Base2
{
    int x;
    Derived(Base1& a, Base2& b);
};

Base1::Base1(int x):x(x){ }
Base2::Base2(int x):x(x){ }
Derived::Derived(Base1& a, Base2& b):Base1(a.x),Base2(b.x){
    x = a.x + b.x;
    
}

int main()
{
    int x, y;
    cin >> x >> y;
    Base1 a(x);
    Base2 b(y);
    Derived d(a, b);
    cout << d.Base1::x << "+" << d.Base2::x << "=" << d.x << endl;
    return 0;
}
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape{
public:
    Shape() {}
    virtual ~Shape() {}
};

class Triangle: public Shape{
public:
    Triangle() {}
    ~Triangle() {}
};

class Rectangle: public Shape {
public:
    Rectangle() {}
    ~Rectangle() {}
};

/*dynamic_cast */
int getVertexCount(Shape * b){
    if ( Triangle * p = dynamic_cast<Triangle*>(b) ){
        return 3;
    }else if ( Rectangle *p = dynamic_cast<Rectangle*>(b) ){
        return 4;
    }else{
        return 0;
    }
}

int main() {
    Shape s;
    cout << getVertexCount(&s) << endl;
    Triangle t;
    cout << getVertexCount(&t) << endl;
    Rectangle r;
    cout << getVertexCount(&r) << endl;
}
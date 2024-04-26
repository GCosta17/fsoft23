#ifndef SCHOOLAPPLICATION_CIRCLE_H
#define SCHOOLAPPLICATION_CIRCLE_H
#include <iostream>
#include <Shape.h>

using namespace std;

class Circle() : public Shape {

private:
    Point origin;
    double radious;

public:
    Circle(const Point& circlePoint);


}


#endif //SCHOOLAPPLICATION_CIRCLE_H

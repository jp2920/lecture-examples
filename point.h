#ifndef POINT_H
#define POINT_H

#include <iostream>

template <typename T>
class Point {
private:
    T x, y;

public:
    Point(T x, T y) : x(x), y(y) {}

    void print() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

#endif

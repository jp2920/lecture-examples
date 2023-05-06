#include <iostream>
#include "point.h"
#include "pair.h"

typedef Point<int> Point_integer;
typedef Point<float> Point_float;
typedef Point<double> Point_double;

typedef Pair<int,int> Pair_integer_integer;

typedef Point<int>* Point_ptr_integer; 

int main() {
    Point_integer p1(2, 5);
    Point_float p2(3.5, 8.5);
    Point_double p3(0.002, 0.004);

    p1.print();
    p2.print();
    p3.print();

    Point_ptr_integer ptr1 = new Point_integer(10,100);
    ptr1->print(); 

    Pair_integer_integer pa1(1,2); 
    Pair<int,float> pa2(1,2); 
    Pair<double,float> pa3(1,2);

    Pair<Point_integer, Point_float> line(p1,p2);

    return 0;
}

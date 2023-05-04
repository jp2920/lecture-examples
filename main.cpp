#include <iostream> 

using namespace std; 

// Pure abstract class
class Printable {
    public: 
        virtual void print() = 0;
};

// the job of an interface is to force derived classes to include this virtual functionality



struct Point {
    //assume it is working in 2d
    double x; 
    double y;
}; 

//abstract class
class Shape : public Printable {
    private: 
        Point _centre; 
    public:
    //These constructors are necessary to initialise the data members
        Shape(double x, double y) {
            _centre.x = x; 
            _centre.y = y;
        }
        //default constructor
        Shape():Shape(0,0) {}

        virtual double get_area() = 0;     
        /*pure virtual function which makes Shape an abstract class by setting 
        a function to 0*/      
        /*by doing this, you are saying you want all the derived (children)
        classes to have their own version of the method*/

};

class Square : public Shape {
    private:
        double _side; 
    public:
        // Constructor 
        Square(double x, double y, double side) : Shape(x,y), _side(side) {
            // this-> _centre.x = x; 
            // this-> _centre.y = y;
            // this-> _side = side;
        }
        // default constructor
        Square() : Shape(), _side(0) {}
        double get_area() {
            double area = _side * _side;
            return area; 
        }
        void print() {
            cout << "This is a square with a side = " << _side << end; 
        }
};

class Circle : public Shape {
    private:
        double _radius; 
    public:
        // Constructor 
        Circle(double x, double y, double radius) : Shape(x,y), _radius(radius) {
            // this-> _centre.x = x; 
            // this-> _centre.y = y;
            // this-> _side = side;
        }
        // default constructor
        Circle() : Shape(), _radius(0) {}
        double get_area() {
            double area = _radius*_radius*3.14;
            return area; 
        }
        void print() {
            cout << "This is a circle with a radius = " << _radius << end; 
        }        
};

void test(Shape* shape) {
    cout << "The area is: " << shape->get_area() << endl ;
}


class Person : public Printable {
    private: 
        string name; 

    public: 
        string get_name() {
            return name; 
        }
        void set_name(string name){
            this->name = name;
        }
        void print() {
            cout << "This is a person name: " << name << endl; 
        }
};


//common functionality is the ability to do something
void print_summary(Printable* object) {
    object ->print(); 
}

int main() {

    Shape* square = new Square(10,10,5);
    Shape* circle = new Circle(1,10,3.2);

    test(square); 
    test(circle);

    Person* person; 
    person->set_name(Jonty);
    print_summary(square);
    print_summary(person);

    return 0;
}

// 
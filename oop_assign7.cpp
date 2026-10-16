#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Shape *shapePtr;
    
    Circle c;
    Rectangle r;
    
    // Pointing to Circle object
    shapePtr = &c;
    cout << "Calling draw() using base pointer for Circle:" << endl;
    shapePtr->draw(); // Polymorphic call
    
    // Pointing to Rectangle object
    shapePtr = &r;
    cout << "\nCalling draw() using base pointer for Rectangle:" << endl;
    shapePtr->draw(); // Polymorphic call
    
    return 0;
}
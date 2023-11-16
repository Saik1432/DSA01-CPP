#include <iostream>

class Shape {
public:
    virtual double area() const {
        std::cout << "Calculating area of a generic shape." << std::endl;
        return 0.0;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius; // Simple approximation of pi for demonstration purposes
    }
};

int main() {
    Shape* shapePtr;

    Rectangle rectangle(4.0, 5.0);
    Circle circle(3.0);

    // Shape pointer pointing to a Rectangle object
    shapePtr = &rectangle;
    std::cout << "Area of Rectangle: " << shapePtr->area() << std::endl;

    // Shape pointer pointing to a Circle object
    shapePtr = &circle;
    std::cout << "Area of Circle: " << shapePtr->area() << std::endl;

    return 0;
}


#include <iostream>

class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double calculateArea() {
        return 0.0;
    }

    virtual double calculatePerimeter() {
        return 0.0;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double calculateArea() override {
        return height * width;
    }

    double calculatePerimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double calculateArea() override {
        return 0.5 * height * width;
    }

    double calculatePerimeter() override {
        return 3 * width;
    }
};

int main() {
    Rectangle rectangle(5, 4);
    Triangle triangle(6, 8);

    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "Triangle Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}


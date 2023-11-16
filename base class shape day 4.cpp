#include<iostream>

class Shape {
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() const override {
        return length * width;
    }

    float perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    float side1;
    float side2;
    float side3;

public:
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    float area() const override {
        // Using Heron's formula to calculate the area of a triangle
        float s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    float perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Rectangle rectangle(4, 5);
    Triangle triangle(3, 4, 5);

    std::cout << "Rectangle - Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Triangle - Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << std::endl;

    return 0;
}


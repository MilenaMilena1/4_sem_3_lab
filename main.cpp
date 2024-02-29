#include <iostream>
using namespace std;

class Shape {
public:
    Scale(float scaleFactor) :void virtual = 0;
    ShowInfo() :void virtual = 0;
    void GetName() :string virtual = 0;
}
    private:

};

class Shape2D : public Shape {
public:

private:
};

class Shape3D : public Shape {

};

class Triangle : public Shape {

private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};
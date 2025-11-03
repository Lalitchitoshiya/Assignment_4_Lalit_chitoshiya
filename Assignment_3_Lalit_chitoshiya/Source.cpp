#include "Header.h"

// circle class definitions
circle::circle(double r) {
    radius = r;
}

void circle::area(double radius) {
    cout << 3.14 * radius * radius;
}

void circle::perimeter(double radius) {
    cout << 3.14 * 2 * radius;
}

// rectangle class definitions
rectangle::rectangle(double l, double w) {
    length = l;
    width = w;
}

void rectangle::area(double l, double w) {
    cout << length * width;
}

void rectangle::perimeter(double l, double w) {
    cout << 2 * (length + width);
}

// triangle class definitions
triangle::triangle(double a, double b, double c) {
    side1 = a;
    side2 = b;
    side3 = c;
}

void triangle::area(double a, double b, double c) {
    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << area;
}

void triangle::perimeter(double a, double b, double c) {
    cout << (a + b + c) / 2 << endl;
}

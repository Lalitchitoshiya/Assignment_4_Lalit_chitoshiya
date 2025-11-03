#pragma once

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// circle class 
class circle {
private:
    double radius;

public:
    circle(double r);
    void area(double radius);
    void perimeter(double radius);
};

// Rectangle class
class rectangle {
private:
    double length;
    double width;

public:
    rectangle(double l, double w);
    void area(double l, double w);
    void perimeter(double l, double w);
};

// Triangle class
class triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    triangle(double a, double b, double c);
    void area(double a, double b, double c);
    void perimeter(double a, double b, double c);
};



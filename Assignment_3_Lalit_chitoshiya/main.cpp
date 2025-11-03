#include "Header.h"
#include "sorting.h"


int main() {
    string shape;
    double r;
    double a, b, c;
    double l, w;

    cout << "add shape from circle ,trialngle,rectangle " << endl;
    cin >> shape;
    
    if (shape == "circle") {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        circle c1(r);
        c1.perimeter(r);
    }

    else if (shape == "triangle") {
        double a, b, c;
        cout << "Enter side 1st :\n";
        cin >> a;

        cout << "Enter side 2nd :\n";
        cin >> b;

        cout << "Enter side 3rd :\n";
        cin >> c;

        triangle t1(a, b, c);
        t1.area(a, b, c);
        t1.perimeter(a, b, c);
    }

    else if (shape == "rectangle") {
        double l, w;
        cout << "enter lenght" << endl;
        cin >> l;
        cout << "enter width" << endl;
        cin >> w;

        rectangle r1(l, w);
        r1.area(l, w);
        r1.perimeter(l, w);
    }

    else {
        cout << " shape is not correct \n";
    }
    
    return 0;
}

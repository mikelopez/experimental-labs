/* 
 * Illustrating example using constructor
 * to set the width and height of the Rectangle 
 * class so we can produce the right area.
 *
 */

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int, int);
        int area() { return (width * height); }
};


// constructor
Rectangle::Rectangle(int a, int b) {
    width = a;
    height = b;
}

int main() {
    Rectangle rect_a(3, 6);
    Rectangle rect_b(6, 4);
    cout << "Rectangle A: " << rect_a.area() << endl;
    cout << "Rectangle B: " << rect_b.area() << endl;
    return 0;
}

#include <iostream>
using namespace std;

struct Point {
    float x, y;

    void setCoordinates(float newX, float newY) {
        x = newX;
        y = newY;
    }

    void displayCoordinates() {
        cout << "Koordinat: (" << x << ", " << y << ")" << endl;
    }
};

class Rectangle {
private:
    float length, width;

public:
    
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    void displayDimensions() {
        cout << "Panjang: " << length << ", Lebar: " << width << endl;
    }
};

int main() {
    
    Point p;
    p.setCoordinates(3.0, 4.0);
    cout << "Koordinat p: ";
    p.displayCoordinates();

    Rectangle r(5.0, 6.0);
    cout << "Luas persegi panjang: " << r.calculateArea() << endl;
    cout << "Dimensi persegi panjang: ";
    r.displayDimensions();

    return 0;
}

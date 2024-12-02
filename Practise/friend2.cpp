<<<<<<< HEAD
#include <iostream>

using namespace std;

class Rectangle; // Forward declaration

class GeometryHelper {
public:
    // Friend function declaration inside GeometryHelper class
    static double totalCalculateArea(Rectangle r1, Rectangle r2);
};

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize the rectangle dimensions
    Rectangle(double l, double w) : length(l), width(w) {}

    // Declare totalCalculateArea as a friend function so it can access private members
    friend double GeometryHelper::totalCalculateArea(Rectangle r1, Rectangle r2);
};

// Definition of the friend function
double GeometryHelper::totalCalculateArea(Rectangle r1, Rectangle r2) {
    double area1 = r1.length * r1.width;
    double area2 = r2.length * r2.width;
    return area1 + area2;
}

int main() {
    // Create two Rectangle objects with different dimensions
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(7.0, 4.0);

    // Use GeometryHelper's friend function to calculate the total area
    double totalArea = GeometryHelper::totalCalculateArea(rect1, rect2);

    // Display the areas and total area
    cout << "Total Area of both Rectangles: " << totalArea << endl;

    return 0;
}
=======
#include <iostream>

using namespace std;

class Rectangle; // Forward declaration

class GeometryHelper {
public:
    // Friend function declaration inside GeometryHelper class
    static double totalCalculateArea(Rectangle r1, Rectangle r2);
};

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize the rectangle dimensions
    Rectangle(double l, double w) : length(l), width(w) {}

    // Declare totalCalculateArea as a friend function so it can access private members
    friend double GeometryHelper::totalCalculateArea(Rectangle r1, Rectangle r2);
};

// Definition of the friend function
double GeometryHelper::totalCalculateArea(Rectangle r1, Rectangle r2) {
    double area1 = r1.length * r1.width;
    double area2 = r2.length * r2.width;
    return area1 + area2;
}

int main() {
    // Create two Rectangle objects with different dimensions
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(7.0, 4.0);

    // Use GeometryHelper's friend function to calculate the total area
    double totalArea = GeometryHelper::totalCalculateArea(rect1, rect2);

    // Display the areas and total area
    cout << "Total Area of both Rectangles: " << totalArea << endl;

    return 0;
}
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01

<<<<<<< HEAD
#include <iostream>
using namespace std;

class Rectangle {
private:
    const int length = 10; // Constant length
    const int width = 5;   // Constant width

public:
    // Const member function to calculate the area
    int getArea() const {
        return length * width;
    }

    // Const member function to display the dimensions
    void displayDimensions() const {
        cout << "Length: " << length <<endl;
        cout<<" Width: " << width << endl;
    }
};

int main() {
    Rectangle rect; // Create a Rectangle object

    rect.displayDimensions();
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
=======
#include <iostream>
using namespace std;

class Rectangle {
private:
    const int length = 10; // Constant length
    const int width = 5;   // Constant width

public:
    // Const member function to calculate the area
    int getArea() const {
        return length * width;
    }

    // Const member function to display the dimensions
    void displayDimensions() const {
        cout << "Length: " << length <<endl;
        cout<<" Width: " << width << endl;
    }
};

int main() {
    Rectangle rect; // Create a Rectangle object

    rect.displayDimensions();
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01

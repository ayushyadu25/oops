<<<<<<< HEAD
#include <iostream>
using namespace std;

using namespace std;

class Transportation {
private:
    string type;
    int capacity;

public:
    Transportation(string t, int c) : type(t), capacity(c) {}

    void display() {
        cout << "Transportation Type: " << type << ", Capacity: " << capacity << endl;
    }

    ~Transportation() {
        cout << "Destructor called for Transportation object: " << type << endl;
    }
};

int main() {
    Transportation* t1 = new Transportation("Bus", 50);
    Transportation* t2 = new Transportation("Train", 200);

    t1->display();
    t2->display();

    delete t1;
    delete t2;

    return 0;
}
=======
#include <iostream>
using namespace std;

using namespace std;

class Transportation {
private:
    string type;
    int capacity;

public:
    Transportation(string t, int c) : type(t), capacity(c) {}

    void display() {
        cout << "Transportation Type: " << type << ", Capacity: " << capacity << endl;
    }

    ~Transportation() {
        cout << "Destructor called for Transportation object: " << type << endl;
    }
};

int main() {
    Transportation* t1 = new Transportation("Bus", 50);
    Transportation* t2 = new Transportation("Train", 200);

    t1->display();
    t2->display();

    delete t1;
    delete t2;

    return 0;
}
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01

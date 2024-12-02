<<<<<<< HEAD
#include<iostream>
using namespace std;

class GeometricHelper{
    public:
    static int calculateArea(Rectangle r1, Rectangle r2);
};
class Rectangle{ 
    int length;
    int breadth;
public:
    Rectangle(){

    }
    Rectangle(int l,int b){
        length=l;
        breadth=b;

    }
    friend int GeometricHelper::calculateArea(Rectangle r1,Rectangle r2);
};
 int GeometricHelper::calculateArea(Rectangle r1,Rectangle r2){
        return ((r1.length*r1.breadth)+(r2.length*r2.breadth));
    }
int main(){
    Rectangle r1(4,3);
    Rectangle r2(5,6);
    int area = GeometricHelper::calculateArea(r1,r2);
    cout<<"total area is "<< area <<endl;
    return 0;
=======
#include<iostream>
using namespace std;

class GeometricHelper{
    public:
    static int calculateArea(Rectangle r1, Rectangle r2);
};
class Rectangle{ 
    int length;
    int breadth;
public:
    Rectangle(){

    }
    Rectangle(int l,int b){
        length=l;
        breadth=b;

    }
    friend int GeometricHelper::calculateArea(Rectangle r1,Rectangle r2);
};
 int GeometricHelper::calculateArea(Rectangle r1,Rectangle r2){
        return ((r1.length*r1.breadth)+(r2.length*r2.breadth));
    }
int main(){
    Rectangle r1(4,3);
    Rectangle r2(5,6);
    int area = GeometricHelper::calculateArea(r1,r2);
    cout<<"total area is "<< area <<endl;
    return 0;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}
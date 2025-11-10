#include<iostream>
using namespace std;
//declare a class
class wall {
    private:
    double length;
    double height;
    public:
    //initialize variables with parameterized constuctor
    wall(double len,double hgt)
    :length{len}
    ,height{hgt} {
    }
    //copy constructor with a wall object as parameter
    //copies data of the obj parameter
    wall(const wall& obj)
    :length{obj.length}
    ,height{obj.height}{
    }
    double calculateArea() {
        return length*height;

    }
};
int main() {
    //create an object of wall class
    wall wall1(10.5,8.6);
    //copy contents of wall1 to wall2
    wall wall2=wall1;
    //print areas of wall1 and wall2
    cout<<"Area of wall1:"<<wall1.calculateArea()<<endl;
    cout<<"Area of wall2:"<<wall2.calculateArea();
    return 0;
}
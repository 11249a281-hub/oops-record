#include<iostream>
using namespace std;
//declare a class
class wall{
    private:
    double length;
    double height;
    public:
    //parameterized constructor to initialize variables
    wall(double len,double hgt)
    :length{len}
    ,height{hgt}{
    }
    double calculateArea(){
        return length*height;
    }
};
int main(){
    //create object and intialize data members
    wall wall1(10.5,8.6);
    wall wall2(8.5,6.3);
    cout<<"Area of wall1:"<<wall1.calculateArea()<<endl;
    cout<<"Area of wall2:"<<wall2.calculateArea();
    return 0;
}
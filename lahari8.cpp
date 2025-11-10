#include<iostream>
using namespace std;
//declare a class
class wall{
    private:
    double length {5.5};
    public:
    //defaulted constructor to initialize variable
    wall()=default;
    void print_length(){
        cout<<"length="<<length<<endl;
    }
};
int main() {
    wall wall1;
    wall1.print_length();
    return 0;
}
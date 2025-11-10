#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void getA(){
        cout<<"enter a:";
        cin>>a;
    }
};
class intermediate:public base{
    protected:
    int b;
    public:
    void getB(){
        cout<<"enter b:";
        cin>>b;
    }
};
class derived:public intermediate {
    public:
    void display(){
        cout<<"sum="<<a+b<<endl;
    }
};
int main(){
    derived obj;
    obj.getA();
    obj.getB();
    obj.display();
    return 0;
}
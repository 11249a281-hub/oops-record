#include<iostream>
using namespace std;
class base1{
    protected:
    int a;
    public:
    void getA(){
        cout<<"enter value of a:";
        cin>>a;
    }
};
class base2{
    protected:
    int b;
    public:
    void getB(){
        cout<<"enter value of b:";
        cin>>b;
    }
};
class derived:public base1,base2{
    public:
    void sum(){
        cout<<"sum="<<a+b<<endl;

    }
};
int main(){
    derived d;
    d.getA();
    d.getB();
    d.sum();
    return 0;
}
#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void getdata(){
        cout<<"enter a value:";
        cin>>a;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"value of a="<<a<<endl;
    }
};
int main(){
    derived obj;
    obj.getdata();
    obj.display();
    return 0;
}
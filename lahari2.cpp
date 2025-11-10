#include<iostream>
using namespace std;
class employee
{
    public:
    int empID;
    string name;
    float salary;
    void setemployee(int id,string n,float s){
        empID=id;
        name=n;
        salary=s;
    }
    //Member function declaration(to be defined outside)
    void displayemployee();
};
//function defined outside class using scope resolution
void employee:: displayemployee(){
    cout<<"employeeID:"<<empID
    <<"Name:"<<name
    <<"salary:"<<salary<<endl;
}
int main()
{
    employee e1,e2;
    //call function defined inside class
    e1.setemployee(101,"Ravi",50000.75);
    e2.setemployee(102,"Priya",62000.50);
    //call function defined outside class
    e1.displayemployee();
    e2.displayemployee();
    return 0;
}

    
    

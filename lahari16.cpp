#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat(){
        cout<<"this animal eats food."<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"the dog barks: woof! woof!"<<endl;
    }
};
class Cat:public Animal{
    public:
    void meow(){
        cout<<"the cat meows: meow! meow!"<<endl;
    }
};
class Horse:public Animal{
    public:
    void neigh(){
        cout<<"the horse neighs: neighhhhhh!!!!"<<endl;
    }
};
//main function
int main(){
    Dog dog;
    Cat cat;
    Horse horse;

    cout<<"Dog:"<<endl;
    dog.eat();//inherited from animal
    dog.bark();//specific to dog

    cout<<"\nCat:"<<endl;
    cat.eat();//inherited from animal
    cat.meow();//specific to cat

    cout<<"\nHorse:"<<endl;
    horse.eat();//inherited from animal
    horse.neigh();//specific to horse

    return 0;

}
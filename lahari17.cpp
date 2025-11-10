#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;
public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
    void displayData() {
        cout << "\nRoll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class 1 (academic marks)
class Marks : virtual public Student {
protected:
    float sub1, sub2, sub3;
public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> sub1 >> sub2 >> sub3;
    }
    float totalMarks() {
        return sub1 + sub2 + sub3;
    }
};

// Derived class 2 (sports score)
class Sports : virtual public Student {
protected:
    float sportsScore;
public:
    void getSportsScore() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
    float getScore() {
        return sportsScore;
    }
};

// Derived class 3 (final result – multiple inheritance)
class Result : public Marks, public Sports {
    float total, average;
public:
    void calculate() {
        total = totalMarks() + getScore();
        average = total / 4; // 3 subjects + 1 sports
    }
    void displayResult() {
        displayData();
        cout << "Total Marks (including sports): " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Result r;
    r.getData();
    r.getMarks();
    r.getSportsScore();
    r.calculate();
    r.displayResult();
    return 0;
}

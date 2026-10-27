#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "\nStudent object created" << endl;
    }

    
    void display() {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    
    ~Student() {
        cout << "\nStudent object destroyed" << endl;
    }
};

int main() {
    int r;
    string n;
    cout<<"\nENTER YOUR ROLL NUMBER:";
    cin>>r;
    cout<<"\n ENTER YOUR NAME:";
    cin>>n;
    Student s1(r,n);
    s1.display();

    return 0;
}

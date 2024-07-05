#include<iostream>
using namespace std;

class Student{
    private:
    int marks;
    string name;
    int usn;

    public:
    // Student(string n, int u, int m){
    //     name = n;
    //     usn = u;
    //     marks = m;
    // }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }

    void setUSN(int usn){
        this->usn = usn;
    }

    int getUSN(){
        return usn;
    }
};

int main(){
    Student s1;
    s1.setName("Ashank");
    cout << s1.getName();

    s1.setUSN(123);
    cout << s1.getUSN();
}

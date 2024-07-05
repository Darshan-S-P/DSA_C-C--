//Default constructor
//if u have created constructor then it creates object if u dint create by default it will be created (internally) automatically because object needs to be created
//Destructors are automatically called when object needs to be destroyed
#include <iostream>

using namespace std;
class Demo {
    public:
    Demo(){//Default Constructor
    cout<<"Tam a constructor!!";
    }
    ~Demo(){//Default Destructor
    cout<<"Tam a Destructor!!";
    }
};

int main() {
    Demo obj; // Object creation using default constructor

}




//Structures and Unions

#include <iostream>
#include <string.h>

using namespace std;

union Student{ //for union just replace struct with union Student but output doesnt come properly {in union onlu one memory allocated but in structures booth usn and name get memeory allocated,4bytes allocated only one can access }{structures lot of memory is used in union memory is saved}
    char name[10];//string name;unions doesnt support string(non primitive datatype) in c++
    int usn;

}s1,s2;//1 way of declaring structure variables



int main()
{
    //struct Student s1;
    //struct Student s2; anoother way in main fn
    //initializing s1=

    s1.usn = 123;
      strcpy(s1.name,"ABC");
    //initialize s2
     s2.usn = 456;
    strcpy(s2.name,"DEF");

    //print s1 details
    cout<<"Student name: "<<s1.name<<endl;
     cout<<"Student usn: "<<s1.usn<<endl;
      cout<<"Student name: "<<s2.name<<endl;
       cout<<"Student usn: "<<s2.usn<<endl;
}

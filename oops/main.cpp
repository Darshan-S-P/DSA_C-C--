//Oops OBJECT ORIENTED PROGRAMMING
/*

->Code reausablity and security
->Once written in class that function is secured
->So we need to give access specifier (public,private,protected)
->Deals with real world
steps:

1) Creating class
2) Creating attributes ->(optional)->constructor
3) Writing methods
4) Object

->classes are blueprint
->Attributes are properties of classes
->Once object destroyed attributes of that object get destroyed but attributes dont get destroyed because they are written in some class
->Constructor of class is written when we have attributes in class
->Methods and functions written inside class
->Functions are building blocks of oops
->Function is block of code which performs a task
->u cannot write executable line of code inside class
->so create function

*/
/*
#include <iostream>

using namespace std;

//Scenario where we dont have attributes then skip

class Hello{
    public:                                     //Access specifier, this is called as label in c++ programming now whatever written inside public is all public;
    static void printHello(){
            cout<<"Hello"<<endl;
            }

};
class Addition{

public:
    void add(){
        int n1,n2;
    cout<<"Enter the Number"<<endl;
    cin>>n1;
    cout<<"Enter the number 2"<<endl;
    cin>>n2;
    cout<<"result"<<n1+n2<<endl;
    }

    };
int main(){

    //Hello h1;
    //Addition ad;
    //h1.printHello();
   // ad.add();
    Hello::printHello();//because static use scope resolution operator so no need to create object

}
*/

//Scenario with attributes with constructor
/* Function which has same name as the class Constructor has 2 things to do
1.Construct the object ,In whole programming concept constructors dont have return type
2.Initialize the object attributes
Destructor's are only supported in C++  */

/*#include<iostream>
using namespace std;

class Car{
    public:
    string BrandName;
    int manuDate;
    Car(string BName,int mDate){
        BrandName = BName;//this keyword is used to eliminate ambiguity in program
       manuDate = mDate;//if parameter and attributes are not same then eliminate this keyword
    }
    void printDetails(){

    cout<<"Car name is:"<<BrandName<<endl;
    cout<<"Car manufacturing date is:"<<manuDate<<endl;
    }
    };
int main(){
    Car c1("BMW",1995);//object posses the atrributes
    Car c2("Maruti800",1982);
    c1.printDetails();
    c2.printDetails();
    }
*/

#include<iostream>
using namespace std;

class Books{
    public:
    string title;
    int copies;

    Books(string Title,int copys){
        title= Title;
        copies=copys;
    }
    void BookDetails(){
        cout<<"Book Title:"<<title<<endl;
        cout<<"Book copies sold:"<<copies<<endl;
    }

    };

    int main(){
        Books b1("ABC", 5);
        Books b2("DEF", 6);
        b1.BookDetails();
        b2.BookDetails();

    }




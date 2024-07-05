/*#include <iostream>

using namespace std;

class Animal{//grnadparent
    public:
     void eat(){
        cout<<"...eating.."<<endl;
     }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"....Bow Bow...."<<endl;;
    }
};
class BabyDog : public Dog{
    public:
    void Cry(){
    cout<<".......Crying....."<<endl;
    }


};
class Cat: public Animal{                      //Multilevel
    public:
        void meow(){
        cout<<"...meow meow...."<<endl;
        }



};
int main()
{
   Animal a;
   a.eat();
   Dog d;
   d.bark();
   d.eat();

   BabyDog bd;
    bd.eat();
   bd.bark();
   bd.Cry();

   Cat c;
    c.meow();
}
*/


//Multiple Inheritance
#include <iostream>
using namespace std;

class Mom{
public:
    void cook(){

    }
};
class Dad{
    public:
    void cook(){

    }

};
class Child : public Mom,public Dad{
    public:
    void study(){

    }


};

int main (){
    Mom m;
    m.cook();

    Dad d;
    d.cook();        //Issue in multiple inheritance is that if in this case if booth mom and dad have same function cook which function will child inherit father cook or mom cook,
    //so java uses interfaces for this dont support multiple inheritance, ambiguity error, so in c++ we use scope resolution operator

    Child c;
   c.Mom::cook();
   c.Dad::cook();


   // ambiguity Resolution!
}

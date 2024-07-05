//Polymorphism

/*Poly + morph
many forms

functions - should be polymorphism
Base -> condition

/*There should be 2 similar name functions in either 2 different classes or in 1 same class
there are 2 types of polymorphism:
->Compile Time it is also called as static polymorphism or early binding  (overloading) same name in same class
->Run Time is also called as dynamic or late binding (overriding) same name in different class speciality is inheritance here/

/*#include <iostream>

using namespace std;


class India{
    public:
   void capital(){
   cout<<"New Delhi"<<endl;
   }
};

class USA{
    public:
   void capital(){
    cout<<"Washington DC"<<endl;
   }
};
int main()
{
   India objI;
   USA objU;

   objI.capital();
   objU.capital();
}
*/

/*#include<iostream>
using namespace std;

class Addition{

public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    };

int main(){
    Addition obj;
    cout<< obj.add(1 , 2)<<endl;;
    cout<< obj.add(1 , 2 , 3)<<endl;
    return 0;
}
*/
//Constructor can be overloaded not overided


//Overriding
#include<iostream>
using namespace std;

class Mom{
    public:
        void cook(){
        cout<<"Indian"<<endl;
        }

    };

class Daughter{
public:
    void cook(){
        cout<< "Italian"<<endl;

    }
};

int main(){

    Mom m;
    m.cook();

    Daughter d;
    d.cook();



}

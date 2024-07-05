//Polymorphism

/*Poly + morph
many forms

functions - should be polymorphism
Base -> condition

There should be 2 similar name functions in either 2 different classes or in 1 same class
*/

#include <iostream>

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

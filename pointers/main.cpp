/*#include <iostream>

using namespace std;

int main()
{   int i =50;
    int *ptr;//wild pointer Then it becoames null pointer
    ptr = &i;//ptr = NULL;

    cout << i << endl;
    cout<< ptr <<endl;
    cout<<&i<<endl;
    cout<<&ptr<<endl;
    cout << *ptr<<endl;
    //cout<< *i<<endl;//i is not declared
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int *ptr = new int[100];//in c++ no need of malloc calloc or realloc all done by new [] to mention size
   // int *ptr = (int*) malloc(5*sizeof(int)); //returning void type of pointer malloc only takes 1 argument no initialization in c
    //int *ptr = (int*) calloc(5,5*sizeof(int));//5 blocks are created of 20 bytes with intialized to 0 2 arguments
    //ptr = (int*)realloc(ptr, 300);//realloc also uses 2 arguments target and destination it cant be used without malloc or calloc in c
    //free(ptr);//if a pointer is freed like this it becomes a dangling pointer in c if u dont free up space memory leak might happen every time u restart memory will be allocated but none will utilize it so memory leak will happen.
    delete ptr; //in c++
    ptr= NULL;

}*/
/*#include<iostream>
using namespace std;

int main(){

    int i = 50;
    int *ptr;
    int **dptr;
    int ***ddptr;
    int  ****dddptr;
     ptr = &i;
    dptr = &ptr;
    ddptr = &dptr;
    dddptr = &ddptr;
    cout<<i<<endl;;
    cout<<*ptr<<endl;;
    cout<<**dptr<<endl;
    cout<<***ddptr<<endl;
    cout<<****dddptr<<endl;

}
*/
/*#include<iostream>
using namespace std;

int insertAtHead(int **head, int val){
//logic of insertion at head

}


int main(){
    int * head = NULL:
        insertAtHead(&head,10);

}
*/

/*#include<iostream>
using namespace std;
int main(){
    void *ptr;// generic pointer which can point to any type of value we need to typecast it to different type of value once typecasted to any other type it will become that type of typed pointer
    int *ptr1;
    int data = 10;
    ptr = &data;
    ptr1 = (int*)ptr;

}
*/






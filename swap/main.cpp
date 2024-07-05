#include <iostream>

using namespace std;
void swap(int *a,int *b){
    int c;
    c= *a;
    *a=*b;
    *b=c;

}

int main()
{
    int c;
    int a = 10;
    int b = 20;
    cout << "Before swapping a:"<<a<<"and b:"<<b << endl;
    swap(&a,&b);
    cout<<"After swapping a:"<<a<<"and b:"<<b;

    return 0;
}

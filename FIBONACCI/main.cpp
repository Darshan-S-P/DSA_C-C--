#include <iostream>

using namespace std;



int main()
{
    int f1=0,f2=1,n,fib;
    cout << "Enter the number:" << endl;
    cin>>n;
    cout<<f1<<endl<<f2<<endl;
    for(int i=2;i<=n;i++){
            fib=f1+f2;
            cout<<fib<<endl;
            f1=fib;
            fib=f2;

            }

    return 0;
}

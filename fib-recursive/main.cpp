#include <iostream>

using namespace std;

int fibo(int n){

    int f1=0,f2=1;
    if(n==0){
        return 0;
    }

    if (n==1){
        return 1;
    }

    else{
        return fibo(n - 1)+fibo(n - 2);
    }
}
int main()
{

    cout << "enter the number" << endl;
    cin>>n;
    for (int i=0;i<n;i++){
    cout<<fibo(i)<<" ";
    }
   cout<<endl;
}

#include <iostream>
using namespace std;

int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }

    int pre1 = fib(n-1);
    int pre2 = fib(n-2);
    return pre1 + pre2;

}

int main(){

    cout << fib(8) << endl;
    return 0;

}
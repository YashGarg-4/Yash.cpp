#include <iostream>
using namespace std;

int SOD(int n){

    if (n == 0){
        return 0;
    }

    int SumOfRest = SOD(n/10);

    return n%10 + SumOfRest;

}

int main(){

    int n = 123456;

    cout << SOD(n);

    return 0;
}
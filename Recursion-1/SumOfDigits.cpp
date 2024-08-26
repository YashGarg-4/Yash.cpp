#include <iostream>
using namespace std;

int SOD(int n,int sum = 0){

    if (n == 0){
        return sum;
    }

    sum += (n%10);
    n = n/10;

    SOD(n, sum);

}

int main(){

    int n = 123456;

    cout << SOD(n);

    return 0;
}
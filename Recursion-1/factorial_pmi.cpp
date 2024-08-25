#include <iostream>
using namespace std;

int fact(int n){
    if (n == 0){
        return 1;
        // Gotta spoonfeed the basecase
    }

    int smallOutput = fact(n-1); //As per PMI we can safely assume that fact(n-1) exists
    int output = n * smallOutput;
    return output;
}

int main(){
    int x = fact(4);
    cout << x;
    return x; 

}
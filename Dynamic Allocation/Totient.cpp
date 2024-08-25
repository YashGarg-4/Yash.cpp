#include <iostream>
using namespace std;

int main(){
    int a, b;
    
    cin >> a >> b;

    int c = (a>b) ? a : b; // Totient Func
    
    cout << "The value of c is: " << c << endl;
    
    return 0;
}
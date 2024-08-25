#include <iostream>
using namespace std;

inline int min(int a, int b){
    return (a<b)?a:b;
}

int main(){
    int a, b;
    
    cin >> a >> b;

    int c = (a>b) ? a : b; // Totient Func
    int x = min(a, b);
    cout << "The value of c is: " << c << endl;
    cout << "The value of x is: " << x << endl;
    
    return 0;
}
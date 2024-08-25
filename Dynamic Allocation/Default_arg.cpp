#include <iostream>
using namespace std;

int sum(int a[], int size, int si = 0){
    int ans = 0;
    for (int  i = si; i < size; i++){
        ans += a[i];
    }
    return ans;

}

// Default arg is given from right to left, can't be from left to right.

int main(){

    int a[5] = {1, 2, 3, 4, 5};
    // input code for a 

    cout << sum(a, 5) << endl;
    cout << sum(a, 5, 3) << endl;

    return 0;

}
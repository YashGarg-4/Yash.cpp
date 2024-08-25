#include <iostream>
using namespace std;

bool issort(int a[], int size){
    if (size == 0 || size == 1){
        return true;
    }

    if (a[0] > a[1]){
        return false;
    }

    bool isSmallerSorted = issort(a+1, size - 1);
    return isSmallerSorted;
}

int main(){

    int a[5] = {1, 2, 4, 5, 1};
    cout << issort(a, 5) << endl;
    return 0;

}
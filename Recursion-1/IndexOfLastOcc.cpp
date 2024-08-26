#include <iostream>
using namespace std;

int checkind(int a[], int size, int n){
    if (size < 0){
        return -1;
    }
    if (a[size-1] == n){
        return size-1;
    }

    checkind(a, size-1, n);

}

int main(){

    int a[5] = {1, 2, 2, 5, 6};

    int check = 2;

    cout << "Your num is at index: " << checkind(a, 5, check) << endl;

    return 0;



}
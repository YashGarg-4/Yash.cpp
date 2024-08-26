#include <iostream>
using namespace std;

int checkind(int a[], int size, int n, int flag = 0){
    if (flag >= size){
        return -1;
    }
    if (a[flag] == n){
        cout << flag << " ";
    }

    checkind(a, size, n, flag + 1);

}

int main(){

    int a[5] = {1, 2, 7, 2, 6};

    int check = 2;

    checkind(a, 5, check);

    return 0;



}
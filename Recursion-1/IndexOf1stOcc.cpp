#include <iostream>
using namespace std;

int checkind(int a[], int size, int n, int flag = 0){
    if (flag > size){
        return -1;
    }
    if (a[0] == n){
        return flag;
    }

    checkind(a+1, size-1, n, flag + 1);

}

int main(){

    int a[5] = {1, 2, 2, 5, 6};

    int check = 6;

    cout << "Your num is at index: " << checkind(a, 5, check) << endl;

    return 0;



}
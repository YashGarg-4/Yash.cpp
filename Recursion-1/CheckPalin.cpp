#include <iostream>
#include <cstring>
using namespace std;

bool CheckPalin(char a[], int left, int right){

    if (left >= right){
        return true;
    }

    if (a[left] != a[right]){
        return false;
    }

    return CheckPalin(a, left + 1, right - 1); 

}

int main(){

    char a[] = "HellollH";

    cout << CheckPalin(a, 0, strlen(a)-1);

    return 0;
}

#include <iostream>
using namespace std;

void RemoveX(char a[]){

    if (a[0] == '\0'){
        return;
    }

    if (a[0] != 'x'){
        RemoveX(a+1);

    } else {
        int i = 1;
        for (; a[i] != '\0'; i++){
            a[i-1] = a[i];
        }
        
        a[i-1] = a[i];

        RemoveX(a);
    }

}

int main(){

    char a[] = "jxexyxxtr";

    cout << RemoveX(a) << endl;

    return 0;
}
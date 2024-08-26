#include <iostream>
using namespace std;

void replace(char a[], char old, char fresh){
    
    if (a[0] == '\0'){
        return;
    }

    if (a[0] != old){
        replace(a+1, old, fresh);
    } else {
        a[0] = fresh;
        replace(a+1, old, fresh);
    }

}

int main(){
    char a[]= "aabbccdd";

    char old, fresh;

    cout << "The current string is: " << a << endl;
    cout << "Mention char to replace and which: ";
    cin >> old >> fresh;

    replace(a, old, fresh);

    cout << "Updated str: " << a;

    return 0;

}
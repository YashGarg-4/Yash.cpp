#include <iostream>
using namespace std;

bool ispresent(int a[], int size, int check){
    if (size == 0){
        return false;
    }
    if (a[0] == check){
        return true;
    }

    bool thereah = ispresent(a + 1, size -1, check);

    return thereah;
}

int main(){
    int check = 3;
    int a[5] = {1, 2, 3, 5, 6};

    cout << "Your num is present: " << ispresent(a, 5, check) << endl;
    
    return 0;

}
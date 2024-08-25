#include <iostream>
using namespace std;

int ArrSum(int a[], int n){
    if (n < 0){
        return 0;
    }
    
    int ans = 0;

    ans = a[n] + ArrSum(a, n-1);

    return ans;
}

int main(){
    
    int a[5] = {1, 2, 3, 4, 5};

    cout << "Ans is: " << ArrSum(a, 4) << endl;

    return 0;
}
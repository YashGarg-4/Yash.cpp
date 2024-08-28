#include <iostream>
using namespace std;

void switcher(int a[], int i, int j){
    
    int temp = 0;
    
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

int partition(int a[], int s, int e){

    int count = 0; //Count of elements smaller than our a[s]

    for (int i = s; i<=e; i++){
        if (a[i] < a[s]){
            count++;
        }
    }
    
    int pivot_index = count + s;

    switcher(a, s, pivot_index);

    int i = s, j = e;
    while (i < pivot_index && j > pivot_index){
        
        while(a[i] < a[pivot_index] && i < pivot_index){
            i++;
        }
        
        while(a[j] >= a[pivot_index] && j > pivot_index){ // >= sign is there to account for the duplicate values to the pivot
            j--;
        }
        if (i < pivot_index && j > pivot_index){
            switcher(a, i, j);
            i++;
            j--;
        }
    
    }

    return pivot_index;
}

void QS(int a[], int s, int e){

    if (s >= e){
        return;
    }

    int pi = partition(a, s, e);

    QS(a, s, pi-1);
    QS(a, pi+1, e);

}

int main(){

    int a[6] = {4,5,2,3,4,1};

    QS(a, 0, 5);

    for (int i = 0; i < 6; i++){
        cout << a[i] << ' ';
    }

    return 0;

}
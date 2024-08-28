#include <iostream>
using namespace std;

void merge(){



}


void merge_sort(int a[], int s, int e){

    if (s >= e){
        return;
    }

    int mid = (s+e)/2;

    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);
    merge(a, s, mid, e)

}

int main(){



}
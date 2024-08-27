#include <iostream>
using namespace std;


void merge(int a[], int si, int mid, int ei){

    // Create temp arrays
    int n1 = (mid - si + 1);
    int n2 = ei - mid;

    int temp1[n1] = {0};
    int temp2[n2] = {0};

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++){
        temp1[i] = a[si + i];
    }

    for (int i = 0; i < n2; i++){
        temp2[i] = a[mid + 1 + i];
    }

    // Transfer in a sorted manner:
    int i = 0;
    int j = 0;
    int k = si; // These will act as the indices

    while (i < n1 && j < n2){
        if (temp1[i] < temp2[j]){
            a[k] = temp1[i];
            i++;
        
        } else {
            a[k] = temp2[j];
            j++;
        }
        k++;
        
    }

    // Copy the remaining elements

    while (i < n1){
        a[k] = temp1[i];
        i++;
        k++;
    }

    while (j < n2){
        a[k] = temp2[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int si, int ei){
    //Base case
    if (si >= ei){
        return; 
    }

    int mid = (si + ei)/2;

    merge_sort(a, si, mid);
    merge_sort(a, mid + 1, ei);

    merge(a, si, mid, ei);
}

int main(){

    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    merge_sort(a, 0, 9);

    for(int i = 0; i < (sizeof(a)/sizeof(a[0])); i++){
        cout << a[i] << ' ';
    }

    return 0;
}
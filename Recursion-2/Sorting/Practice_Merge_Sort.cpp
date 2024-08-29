#include <iostream>
using namespace std;

void merge(int a[], int s, int mid, int e){

    int n1 = mid - s + 1;
    int n2 = e - mid;

    int temp1[n1] = {0};
    int temp2[n2] = {0};

    for (int i = 0; i < n1 ; i++){
        temp1[i] = a[s + i]; 
    }

    for (int i = 0; i < n2 ; i++){
        temp2[i] = a[mid + 1 + i]; 
    }

    int i = 0, j= 0, k = s;
    
    while (i < n1 && j < n2){
        if (temp1[i] < temp2[j]){
            a[k] = temp1[i];
            k++;
            i++;
        } else {
            a[k] = temp2[j];
            k++;
            j++;
        }
    }

    while (i<n1){
        a[k] = temp1[i];
        i++;
        k++;
    }

    while (i<n1){
        a[k] = temp1[i];
        i++;
        k++;
    }

    while (j<n2){
        a[k] = temp2[j];
        j++;
        k++;
    }



}


void merge_sort(int a[], int s, int e){

    if (s >= e){
        return;
    }

    int mid = (s+e)/2;

    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);
    merge(a, s, mid, e);

}

int main(){

    int a[5] = {5,4,3,2,1};
    
    merge_sort(a, 0, 4);

    for (int i =0; i < 5; i++){
        cout << a[i] << ' ';
    }

    return 0;
}
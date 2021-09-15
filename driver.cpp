#include "heapsort.h"
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int main(){
    vector<int> arr(10, 0);
    cout << endl << "Unsorted Random Array: " << endl;
    for(int i =0; i < 10; i++){
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << endl;
    heapsort(arr, 10);
    cout << "Array after heapsort: " << endl;
    for(int i = 0; i< 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
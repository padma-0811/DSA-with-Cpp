#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for (int i = 0; i<size-1; i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){

    int even[8] = { 3,7,2,9,6,1,8,5};
    int odd[7] = {12, 52, 93, 23, 17, 74, 87};
    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}
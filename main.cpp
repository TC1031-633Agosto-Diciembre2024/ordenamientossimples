#include <iostream>

void swap(int* a, int* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int* arr, int size) {
    for(int i=0;i<size;i++) {
        std::cout<<*(arr+i)<<" ";
    }
    std::cout<<std::endl;
}

void bubbleSort(int* arr,int size) {
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(*(arr+j)>*(arr+j+1)) {
                swap(arr+j,arr+j+1);
            }
        }
        std::cout<<"Iteración "<<i<<std::endl;
        printArray(arr,size);
    }
}

int main() {
    int arr[]= {1,2,3,5,9,10};
    printArray(arr,6);
    bubbleSort(arr,6);
    printArray(arr,6);
    return 0;
}

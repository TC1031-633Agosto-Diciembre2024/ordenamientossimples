#include <iostream>
#include <vector>

void swap(int* a, int* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printVector(std::vector<int>& vector) {
    int size= vector.size();
    for(int i=0;i<size;i++) {
        std::cout<<*(vector.data()+i)<<" ";
    }
    std::cout<<std::endl;
}

void bubbleSort(std::vector<int>& vector) {
    int size= vector.size();
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(*(vector.data()+j)>*(vector.data()+j+1)) {
                swap(vector.data()+j,vector.data()+j+1);
            }
        }
    }
}

void selectionSort(int* arr, int size) {
    for(int i=0;i<size;i++) {
        int minIndex=i;
        for(int j=i+1;j<size;j++) {
            if(*(arr+j)<*(arr+minIndex)) {
                minIndex=j;
            }
        }
        swap(arr+i,arr+minIndex);
    }
}

void insertionSort(int*arr, int size) {
    for(int i=1;i<size;i++) {
        int key=*(arr+i);
        int j=i-1;
        while(j>=0 && *(arr+j)>key) {
            *(arr+j+1)=*(arr+j);
            j--;
        }
        *(arr+j+1)=key;
    }
}

int main() {
    std::vector<int> vector= {10,1,2,9,3,5};
    printVector(vector);
    bubbleSort(vector);
    printVector(vector);
    return 0;
}

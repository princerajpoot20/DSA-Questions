#include <iostream>
using namespace std;

bool isSort(int a[],int size){
    if(size==0 || size==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    
    bool isSmallerSorted=isSort(a+1, size-1);
    
    retuen isSmallerSorted;
}


int sumOfArray(int a[],int size){
    if (size==0){
        return 0;
    }
    
    int smallOutput=sumOfArray(a+1, size-1);
    
    int finalOutput= a[0] + smallOutput;
    
    return finalOutput;
    
}

int main() {
    
    
}

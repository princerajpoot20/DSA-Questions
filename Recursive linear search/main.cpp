//
//  main.cpp
//  Recursive linear search
//
//  Created by Prince Rajpoot on 14/09/22.
//

#include <iostream>
using namespace std;


int linear_search(int *arr,int n,int target){
    
    
    
}


void selectionSort(int *arr, int n){
    
    
    for(int i=0;i<n-1;i++){
        int minInd=i;
        for(int j=i+1;j<n;j++){
            if(arr[minInd]>arr[j]){
                minInd=j;
            }
        }
        if(minInd!=i){
            int temp=arr[minInd];
            arr[minInd]=arr[i];
            arr[i]=temp;
        }
        
    }
    
}

void insertion_Sort(int *arr,int n){
    
    
    for(int i=1;i<n;i++){
        
        int ele=arr[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=ele;
        
    }
   
    
    
}


int main(int argc, const char * argv[]) {
    
    
    return 0;
}

//
//  main.c
//  Frequency Of All Number
//
//  Created by Prince Rajpoot on 20/01/22.
//

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    printf("Enter numbers::\n");
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
            
        }
    }
    int count=1;
    for(int i=0;i<n;i++){
        int number=arr[i];
        
        if(number==arr[i+1]){
            count++;
            continue;
        }
        else{
            printf("%d appears %d times\n",number,count);
            count=1;
        }
        
    }
    
    return 0;
}

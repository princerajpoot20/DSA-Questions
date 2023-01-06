//
//  main.c
//  Transpose of Matrix
//
//  Created by Prince Rajpoot on 20/01/22.
//

#include <stdio.h>

int main() {
    
    int a,b;
    printf("Enter the order of matrix::\n");
    scanf("%d %d",&a,&b);
    int a1[a][b];
    printf("Enter the elements of array::\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&a1[i][j]);
            
        }
    }
    int arr[b][a];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr[j][i]=a1[i][j];
        }
    }
                      
    printf("\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

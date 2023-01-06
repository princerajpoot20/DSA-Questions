//
//  main.c
//  Matrix Multiplication
//
//  Created by Prince Rajpoot on 20/01/22.
//

#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter the order of two matrix::\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if(b!=c){
        printf("Matrix Multiplication not possible\n");
    }
    else{
        int a1[a][b], b2[c][d];
        printf("Enter the elements of first array\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                scanf("%d",&a1[i][j]);
            }
        }
        printf("Enter the elements of Second array\n");
        
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                scanf("%d",&b2[i][j]);
            }
        }
        int row=0,colums=0;
        int arr[a][d];
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                
                arr[i][j]=0;
                for( int k=0;k<b;k++){
                    
                    arr[i][j]+=a1[i][k]*b2[k][j];
                    
                }
                
                
            }
            
        }
        printf("\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}










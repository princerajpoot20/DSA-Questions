
#include <stdio.h>

int main() {
   
   
   
    int n;
    printf("Enter the number of rows::");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n*2;j++){
            
            if(j<=n-i+1 || (n+i-1)<=j)
                printf("*");
            else
                printf(" ");
            
            
        }
        printf("\n");
    }
    
    return 0;
}



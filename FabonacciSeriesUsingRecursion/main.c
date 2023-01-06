//
//  main.c
//  FabonacciSeriesUsingRecursion
//
//  Created by Prince Rajpoot on 20/01/22.
//

#include <stdio.h>

int fab(int n){
    if(n<=1)
        return n;
    
    return fab(n-1)+fab(n-2);
    
}

int main() {
    // insert code here...
    //printf("Hello, World!\n");
    int n=10;
    int term=0;
    for(int i=1;i<=n;i++){
        term=fab(i);
        printf("%d  ",term);
    }
    
    
    return 0;
}

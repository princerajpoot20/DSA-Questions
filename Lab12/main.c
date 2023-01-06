//
//  main.c
//  Lab12
//
//  Created by Prince Rajpoot on 29/12/21.
//

#include <stdio.h>

int factorial(int n){
    if(n==1)
        return 1;
    return n* factorial(n-1);
    
}
int main() {
   
    printf("Enter number to get to fet factorial");
    int num;
    scanf("%d",&num);
    printf("Factorial to %d is:: %d",num,factorial(num));
    
    return 0;
}

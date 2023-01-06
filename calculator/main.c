//
//  main.c
//  calculator
//
//  Created by Prince Rajpoot on 21/04/22.
//





#include <stdio.h>


int sum(int a,int b){
    return a+b;
}
int subs(int a,int b){
    return a-b;
}
int multi(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Enter the operation you want to perform::");
    printf("1 for add");
    printf("2 for add");
    printf("3 for add");
    printf("4 for add");
    int n;
    scanf("%d",&n);
    
    printf("enter two number");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The result is::");
    if(n==1){
        printf("%d",sum(a, b));
    }
    else if(n==2){
        printf("%d",subs(a, b));
    }
    else if(n==3){
        printf("%d",multi(a, b));
    }
    else if (n==4){
        printf("%d",divide(a, b));
    }
    
    
    return 0;
}

//
//  main.c
//  c Testing
//
//  Created by Prince Rajpoot on 23/01/22.
//

#include <stdio.h>


void swap(int& a , int& b){
    int temp=a;
    a=b;
    b=temp;

}

//struct prince{
//    char name [10];
//    int rollno;
//    int n;
//
//}s1,s2;
int main() {
    //s1.name=;
    s1.rollno=224;
    s1.n=1001;
    
    //s1.na=1;
    struct prince s3={.name="prin"};
    
    
    printf("%d\n",s1.rollno);
    printf("%d\n",s1.n);
    printf("%d\n",s3.name);
    
 
    printf("%d",34);
    
    int a=10;
    int b=20;
    
    swap(a,b);
    printf("%d  %d",a,b);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

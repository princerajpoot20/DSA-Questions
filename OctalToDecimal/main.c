
#include <stdio.h>

int main() {
    printf("Enter the number in octal to convert in decimal");
    int n;
    scanf("%d",&n);
    
    int temp=n;
    int place=1, decimal=0;
    while(n>0){
        
        int digit=n%10;
        decimal=(digit*place)+decimal;
        place*=8;
        n/=10;
    }
    printf("The decimal of %d is:: %d\n",temp,decimal);
    
    
    return 0;
}

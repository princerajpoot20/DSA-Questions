
#include <stdio.h>

int main() {
    
    printf("Enter the number in decimal::");
    int n;
    scanf("%d",&n);
    
    int temp=n;
    int place=1;
    int binary=0;
    while(n>0){
        
        int digit =n%2;
        binary=(digit*place)+binary;
        place*=10;
        n/=2;
    }
    printf("The binary of %d is :: %d\n",temp,binary);
    
    return 0;
}

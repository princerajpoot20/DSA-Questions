
#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the number in binary to get the complement::/n");
    scanf("%d",&n);
    
    int temp=n;
    int counter=0;
    while(n>0){
        counter++;
        n=n/10;
    }
    n=temp;
    
    int place=1;
    for (int i=1;i<counter;i++){
        place=place*10+1;
    }
    int comp=place-temp;
    printf("1's Complement is :: %d/n",comp);
    
    int carry=0;
    int twos=0;int no=1;int place=1;
    for(int i=0;i<=counter;i++){
        int digit=comp%10;
        if(digit+no<2){
           twos=(tows*place)+(digit+no)
        }
    }
    return 0;
}

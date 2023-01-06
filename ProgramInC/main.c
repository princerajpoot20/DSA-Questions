
#include<stdio.h>
int add(int arr[],int len){
    
    if(len==0)
        return 0;
    
    return (arr[len-1]+ add(arr, len-1));
    
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    
    
    int sum=add(arr,10);
    
    printf("answer is");
    printf("\n%d\n",sum);
    return 0;
}

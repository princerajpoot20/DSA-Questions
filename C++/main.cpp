#include <iostream>
using namespace std;

bool checkPrime(int n){
    int flag=0;
    if(n==1)
        return false;
for(int i=2;i<n;i++){
    if(n%i==0){
        flag=1;
        return false;
    }
}
if(flag==0)
    return true;
else
        return false;
}

void digitSeprate (int n,int * arr){
while(n>0){
    int last=n%10;
    (arr[last])++;
    n=n/10;
}

}
int maxIndex(int a[],int len){
    int maximum=a[0];
    int index=0;
    for(int i=1;i<len;i++){
    if(a[i]>maximum){
        maximum=a[i];
        index=i;

    }

}
return index;
}
int main() {

   int l,r;
   cout<<"Enter the value of L and R::"<<endl;

   cin>>l>>r;
   int a[10]={0};
    
    
   for(int i=l;i<=r;i++){

    bool isPrime=checkPrime(i);
    if(isPrime){
       digitSeprate(i,a);

    }
   }
   int len=10;
   int maxOccuranceIndex=maxIndex(a,len);
   cout<<maxOccuranceIndex<<"  occur maximum time that is  "<<a[maxOccuranceIndex]<<" times."<<endl;
        return 0;
}

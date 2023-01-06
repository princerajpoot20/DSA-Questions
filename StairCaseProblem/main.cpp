//
//  main.cpp
//  StairCaseProblem
//
//  Created by Prince Rajpoot on 27/05/22.
//

#include <iostream>
using namespace std;

int stairCase(int n){
    if(n==1 || n==0){
        if(n==1)
            return 1;
        else if (n==0)
            return 0;
    }
    
    int sum1=0;
    int sum2=0;
    int temp1=stairCase(n-1);
    int temp2=stairCase(n-2);
    
    sum1=sum1+temp1;
    sum2=sum2+temp2+2;
    cout<<sum1<<" "<<sum2<<endl;
    return sum1+sum2;
    
    
    
}


int main(int argc, const char * argv[]) {
    
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    cout<<endl;
    cout<<stairCase(n)<<endl;
    
    return 0;
}

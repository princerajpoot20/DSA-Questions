//
//  main.cpp
//  DP
//
//  Created by Prince Rajpoot on 23/07/22.
//

#include <iostream>
using namespace std;



int fibo_helper(int n, int * ans){
    
    if(n<=0){
        return 0;
    }
    
    if(n==1){
        return 1;
    }
    
    // Check if the answer already exist or not.
    
    if(ans[n]!=-1){
        return ans[n];
    }
    
    else{
        int temp1= fibo_helper(n-1, ans);
        int temp2= fibo_helper(n-2, ans);
        
        //Saving the output for future use.
        ans[n]=temp1+temp2;
        
        // Returning the answer.
        return ans[n];
    }
    
}

int fibo(int n){
    
    int *ans= new int [n+1];
    for(int i=0;i<(n+1);i++){
        ans[i]=-1;
    }
    
    return fibo_helper(n, ans);
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    
    return 0;
}

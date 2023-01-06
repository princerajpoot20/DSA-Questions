//
//  main.cpp
//  Graphs Implementation
//
//  Created by Prince Rajpoot on 28/07/22.
//

#include <iostream>
using namespace std;


void print(int ** edges,int n){
    
}

int main() {
    
    int n,e;
    cin>>n,e;
    
    int ** edges= new int *[n];
    for(int i=0;i<n;i++){
        
        edges[i]=new int [n];
        
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        cout<<"Enter first and second vertics which are having edges"<<endl;
        int f,s;
        edges[f][s]=1;
        edges[s][f]=1;
        
    }
    
    print(edges,n);
    return 0;
}
